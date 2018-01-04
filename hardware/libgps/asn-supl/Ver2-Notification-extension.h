/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Version-2-parameter-extensions"
 * 	found in "../ulp-version2-parameter-extensions.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_Ver2_Notification_extension_H_
#define	_Ver2_Notification_extension_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Ver2-Notification-extension */
typedef struct Ver2_Notification_extension {
	NULL_t	*emergencyCallLocation	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ver2_Notification_extension_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ver2_Notification_extension;

#ifdef __cplusplus
}
#endif

#endif	/* _Ver2_Notification_extension_H_ */
#include <asn_internal.h>