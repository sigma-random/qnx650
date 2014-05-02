
#ifndef HEADER_COMP_H
#define HEADER_COMP_H

#include <openssl/crypto.h>

#ifdef  __cplusplus
extern "C" {
#endif

typedef struct comp_ctx_st COMP_CTX;

typedef struct comp_method_st
	{
	int type;		/* NID for compression library */
	const char *name;	/* A text string to identify the library */
	int (*init)(COMP_CTX *ctx);
	void (*finish)(COMP_CTX *ctx);
	int (*compress)(COMP_CTX *ctx,
			unsigned char *out, unsigned int olen,
			unsigned char *in, unsigned int ilen);
	int (*expand)(COMP_CTX *ctx,
		      unsigned char *out, unsigned int olen,
		      unsigned char *in, unsigned int ilen);
	/* The following two do NOTHING, but are kept for backward compatibility */
	long (*ctrl)(void);
	long (*callback_ctrl)(void);
	} COMP_METHOD;

struct comp_ctx_st
	{
	COMP_METHOD *meth;
	unsigned long compress_in;
	unsigned long compress_out;
	unsigned long expand_in;
	unsigned long expand_out;

	CRYPTO_EX_DATA	ex_data;
	};


COMP_CTX *COMP_CTX_new(COMP_METHOD *meth);
void COMP_CTX_free(COMP_CTX *ctx);
int COMP_compress_block(COMP_CTX *ctx, unsigned char *out, int olen,
	unsigned char *in, int ilen);
int COMP_expand_block(COMP_CTX *ctx, unsigned char *out, int olen,
	unsigned char *in, int ilen);
COMP_METHOD *COMP_rle(void );
COMP_METHOD *COMP_zlib(void );
void COMP_zlib_cleanup(void);

#ifdef HEADER_BIO_H
#ifdef ZLIB
BIO_METHOD *BIO_f_zlib(void);
#endif
#endif

/* BEGIN ERROR CODES */
/* The following lines are auto generated by the script mkerr.pl. Any changes
 * made after this point may be overwritten when the script is next run.
 */
void ERR_load_COMP_strings(void);

/* Error codes for the COMP functions. */

/* Function codes. */
#define COMP_F_BIO_ZLIB_FLUSH				 99
#define COMP_F_BIO_ZLIB_NEW				 100
#define COMP_F_BIO_ZLIB_READ				 101
#define COMP_F_BIO_ZLIB_WRITE				 102

/* Reason codes. */
#define COMP_R_ZLIB_DEFLATE_ERROR			 99
#define COMP_R_ZLIB_INFLATE_ERROR			 100
#define COMP_R_ZLIB_NOT_SUPPORTED			 101

#ifdef  __cplusplus
}
#endif
#endif

__SRCVERSION( "$URL: http://svn/product/trunk/lib/io-pkt/crypto/dist2/openssl/crypto/comp/comp.h $ $Rev: 233608 $" )
