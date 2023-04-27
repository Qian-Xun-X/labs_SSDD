/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "servicios.h"

bool_t
xdr_result_values (XDR *xdrs, result_values *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->operation_result))
		 return FALSE;
	 if (!xdr_array (xdrs, (char **)&objp->value1.value1_val, (u_int *) &objp->value1.value1_len, ~0,
		sizeof (sting), (xdrproc_t) xdr_sting))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->value2))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->value3))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_set_1_argument (XDR *xdrs, set_1_argument *objp)
{
	 if (!xdr_int (xdrs, &objp->key))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->value1, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->value2))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->value3))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_modify_1_argument (XDR *xdrs, modify_1_argument *objp)
{
	 if (!xdr_int (xdrs, &objp->key))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->value1, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->value2))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->value3))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_copy_1_argument (XDR *xdrs, copy_1_argument *objp)
{
	 if (!xdr_int (xdrs, &objp->key1))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->key2))
		 return FALSE;
	return TRUE;
}