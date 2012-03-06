/* Memory-management  types.  */
typedef int (__cdecl *ic_new_handler_t) (size_t);

typedef struct _ic_heapinfo_t
{
  int *_pentry;
  size_t _size;
  int _useflag;
} _ic_heapinfo_t;

/* Error types.  */
typedef int ic_errno_t;

/* Locale related types.  */

struct _ic_ctype_compat
{
  unsigned long id;
  int is_clike;
};

typedef struct LC_ID {
    unsigned short wLanguage;
    unsigned short wCountry;
    unsigned short wCodePage;
} LC_ID;

typedef struct _ic_setloc_t
{
  char *pchLanguage;
  char *pchCountry;
  int iLcidState;
  int iPrimaryLen;
  BOOL bAbbrevLanguage;
  BOOL bAbbrevCountry;
  LCID lcidLanguage;
  LCID lcidCountry;
  LC_ID _cacheid;
  UINT _cachecp;
  char _cachein[131];
  char _cacheout[131];
  struct _ic_ctype_compat _Lcid_c[5];
} _ic_setloc_t;

typedef struct ic_tmbinfo_t
{
  int refcount;
  int mbcodepage;
  int ismbcodepage;
  int mblcid;
  unsigned short mbulinfo[6];
  unsigned char mbctype[257];
  unsigned char mbcasemap[256];
} ic_tmbinfo_t;

typedef struct ic_lc_timedate_t {
  char *wday_abbr[7];
  char *wday[7];
  char *month_abbr[12];
  char *month[12];
  char *ampm[2];
  char *ww_sdatefmt;
  char *ww_ldatefmt;
  char *ww_timefmt;
  LCID ww_lcid;
  int  ww_caltype;
  int  refcount;
} ic_lc_timedate_t;

typedef struct ic_threadlocinfo_t {
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6]; /* LCID */
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct ic_lconv_t *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *ic_pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  ic_lc_timedate_t *lc_time_curr;
} ic_threadlocinfo_t;

