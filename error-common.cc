/*
 * error-common.cc
 *
 *  Created on: Sep 3, 2014
 *      Author: ed
 * (c) 2014, WigWag Inc.
 */


// ensure we get the XSI compliant strerror_r():
// see: http://man7.org/linux/man-pages/man3/strerror.3.html

#ifdef _POSIX_C_SOURCE
#undef _POSIX_C_SOURCE
#endif
#define _POSIX_C_SOURCE 200112L

#ifdef _GNU_SOURCE
#undef _GNU_SOURCE
#endif


#include "error-common.h"



namespace _errcmn {


void DefineConstants(v8::Handle<v8::Object> target) {

#ifdef _ERRCMN_ADD_CONSTS
#include "errcmn_inl.h"
#endif


#ifdef E2BIG
_ERRCMN_DEFINE_CONSTANT_WREV(target, E2BIG);
#endif

#ifdef EACCES
_ERRCMN_DEFINE_CONSTANT_WREV(target, EACCES);
#endif

#ifdef EADDRINUSE
_ERRCMN_DEFINE_CONSTANT_WREV(target, EADDRINUSE);
#endif

#ifdef EADDRNOTAVAIL
_ERRCMN_DEFINE_CONSTANT_WREV(target, EADDRNOTAVAIL);
#endif

#ifdef EAFNOSUPPORT
_ERRCMN_DEFINE_CONSTANT_WREV(target, EAFNOSUPPORT);
#endif

#ifdef EAGAIN
_ERRCMN_DEFINE_CONSTANT_WREV(target, EAGAIN);
#endif

#ifdef EALREADY
_ERRCMN_DEFINE_CONSTANT_WREV(target, EALREADY);
#endif

#ifdef EBADF
_ERRCMN_DEFINE_CONSTANT_WREV(target, EBADF);
#endif

#ifdef EBADMSG
_ERRCMN_DEFINE_CONSTANT_WREV(target, EBADMSG);
#endif

#ifdef EBUSY
_ERRCMN_DEFINE_CONSTANT_WREV(target, EBUSY);
#endif

#ifdef ECANCELED
_ERRCMN_DEFINE_CONSTANT_WREV(target, ECANCELED);
#endif

#ifdef ECHILD
_ERRCMN_DEFINE_CONSTANT_WREV(target, ECHILD);
#endif

#ifdef ECONNABORTED
_ERRCMN_DEFINE_CONSTANT_WREV(target, ECONNABORTED);
#endif

#ifdef ECONNREFUSED
_ERRCMN_DEFINE_CONSTANT_WREV(target, ECONNREFUSED);
#endif

#ifdef ECONNRESET
_ERRCMN_DEFINE_CONSTANT_WREV(target, ECONNRESET);
#endif

#ifdef EDEADLK
_ERRCMN_DEFINE_CONSTANT_WREV(target, EDEADLK);
#endif

#ifdef EDESTADDRREQ
_ERRCMN_DEFINE_CONSTANT_WREV(target, EDESTADDRREQ);
#endif

#ifdef EDOM
_ERRCMN_DEFINE_CONSTANT_WREV(target, EDOM);
#endif

#ifdef EDQUOT
_ERRCMN_DEFINE_CONSTANT_WREV(target, EDQUOT);
#endif

#ifdef EEXIST
_ERRCMN_DEFINE_CONSTANT_WREV(target, EEXIST);
#endif

#ifdef EFAULT
_ERRCMN_DEFINE_CONSTANT_WREV(target, EFAULT);
#endif

#ifdef EFBIG
_ERRCMN_DEFINE_CONSTANT_WREV(target, EFBIG);
#endif

#ifdef EHOSTUNREACH
_ERRCMN_DEFINE_CONSTANT_WREV(target, EHOSTUNREACH);
#endif

#ifdef EIDRM
_ERRCMN_DEFINE_CONSTANT_WREV(target, EIDRM);
#endif

#ifdef EILSEQ
_ERRCMN_DEFINE_CONSTANT_WREV(target, EILSEQ);
#endif

#ifdef EINPROGRESS
_ERRCMN_DEFINE_CONSTANT_WREV(target, EINPROGRESS);
#endif

#ifdef EINTR
_ERRCMN_DEFINE_CONSTANT_WREV(target, EINTR);
#endif

#ifdef EINVAL
_ERRCMN_DEFINE_CONSTANT_WREV(target, EINVAL);
#endif

#ifdef EIO
_ERRCMN_DEFINE_CONSTANT_WREV(target, EIO);
#endif

#ifdef EISCONN
_ERRCMN_DEFINE_CONSTANT_WREV(target, EISCONN);
#endif

#ifdef EISDIR
_ERRCMN_DEFINE_CONSTANT_WREV(target, EISDIR);
#endif

#ifdef ELOOP
_ERRCMN_DEFINE_CONSTANT_WREV(target, ELOOP);
#endif

#ifdef EMFILE
_ERRCMN_DEFINE_CONSTANT_WREV(target, EMFILE);
#endif

#ifdef EMLINK
_ERRCMN_DEFINE_CONSTANT_WREV(target, EMLINK);
#endif

#ifdef EMSGSIZE
_ERRCMN_DEFINE_CONSTANT_WREV(target, EMSGSIZE);
#endif

#ifdef EMULTIHOP
_ERRCMN_DEFINE_CONSTANT_WREV(target, EMULTIHOP);
#endif

#ifdef ENAMETOOLONG
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENAMETOOLONG);
#endif

#ifdef ENETDOWN
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENETDOWN);
#endif

#ifdef ENETRESET
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENETRESET);
#endif

#ifdef ENETUNREACH
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENETUNREACH);
#endif

#ifdef ENFILE
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENFILE);
#endif

#ifdef ENOBUFS
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOBUFS);
#endif

#ifdef ENODATA
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENODATA);
#endif

#ifdef ENODEV
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENODEV);
#endif

#ifdef ENOENT
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOENT);
#endif

#ifdef ENOEXEC
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOEXEC);
#endif

#ifdef ENOLCK
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOLCK);
#endif

#ifdef ENOLINK
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOLINK);
#endif

#ifdef ENOMEM
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOMEM);
#endif

#ifdef ENOMSG
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOMSG);
#endif

#ifdef ENOPROTOOPT
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOPROTOOPT);
#endif

#ifdef ENOSPC
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOSPC);
#endif

#ifdef ENOSR
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOSR);
#endif

#ifdef ENOSTR
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOSTR);
#endif

#ifdef ENOSYS
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOSYS);
#endif

#ifdef ENOTCONN
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOTCONN);
#endif

#ifdef ENOTDIR
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOTDIR);
#endif

#ifdef ENOTEMPTY
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOTEMPTY);
#endif

#ifdef ENOTSOCK
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOTSOCK);
#endif

#ifdef ENOTSUP
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOTSUP);
#endif

#ifdef ENOTTY
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOTTY);
#endif

#ifdef ENXIO
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENXIO);
#endif

#ifdef EOPNOTSUPP
_ERRCMN_DEFINE_CONSTANT_WREV(target, EOPNOTSUPP);
#endif

#ifdef EOVERFLOW
_ERRCMN_DEFINE_CONSTANT_WREV(target, EOVERFLOW);
#endif

#ifdef EPERM
_ERRCMN_DEFINE_CONSTANT_WREV(target, EPERM);
#endif

#ifdef EPIPE
_ERRCMN_DEFINE_CONSTANT_WREV(target, EPIPE);
#endif

#ifdef EPROTO
_ERRCMN_DEFINE_CONSTANT_WREV(target, EPROTO);
#endif

#ifdef EPROTONOSUPPORT
_ERRCMN_DEFINE_CONSTANT_WREV(target, EPROTONOSUPPORT);
#endif

#ifdef EPROTOTYPE
_ERRCMN_DEFINE_CONSTANT_WREV(target, EPROTOTYPE);
#endif

#ifdef ERANGE
_ERRCMN_DEFINE_CONSTANT_WREV(target, ERANGE);
#endif

#ifdef EROFS
_ERRCMN_DEFINE_CONSTANT_WREV(target, EROFS);
#endif

#ifdef ESPIPE
_ERRCMN_DEFINE_CONSTANT_WREV(target, ESPIPE);
#endif

#ifdef ESRCH
_ERRCMN_DEFINE_CONSTANT_WREV(target, ESRCH);
#endif

#ifdef ESTALE
_ERRCMN_DEFINE_CONSTANT_WREV(target, ESTALE);
#endif

#ifdef ETIME
_ERRCMN_DEFINE_CONSTANT_WREV(target, ETIME);
#endif

#ifdef ETIMEDOUT
_ERRCMN_DEFINE_CONSTANT_WREV(target, ETIMEDOUT);
#endif

#ifdef ETXTBSY
_ERRCMN_DEFINE_CONSTANT_WREV(target, ETXTBSY);
#endif

#ifdef EWOULDBLOCK
_ERRCMN_DEFINE_CONSTANT_WREV(target, EWOULDBLOCK);
#endif

#ifdef EXDEV
_ERRCMN_DEFINE_CONSTANT_WREV(target, EXDEV);
#endif

//#define	ENOBUFS		105	/* No buffer space available */
#ifdef ENOBUFS
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOBUFS);
#endif

//#define	ENODEV		19	/* No such device */
#ifdef ENODEV
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENODEV);
#endif

//#define	ENOTDIR		20	/* Not a directory */
#ifdef ENOTDIR
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOTDIR);
#endif

//------------------------------------------------------

//#define	EISDIR		21	/* Is a directory */
#ifdef EISDIR
_ERRCMN_DEFINE_CONSTANT_WREV(target, EISDIR);
#endif

//#define	EINVAL		22	/* Invalid argument */
#ifdef EINVAL
_ERRCMN_DEFINE_CONSTANT_WREV(target, EINVAL);
#endif



//#define	ENFILE		23	/* File table overflow */
#ifdef ENFILE
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENFILE);
#endif



//#define	EMFILE		24	/* Too many open files */
#ifdef EMFILE
_ERRCMN_DEFINE_CONSTANT_WREV(target, EMFILE);
#endif


//#define	ENOTTY		25	/* Not a typewriter */
#ifdef ENOTTY
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOTTY);
#endif



//#define	ETXTBSY		26	/* Text file busy */
#ifdef ETXTBSY
_ERRCMN_DEFINE_CONSTANT_WREV(target, ETXTBSY);
#endif



//#define	EFBIG		27	/* File too large */
#ifdef EFBIG
_ERRCMN_DEFINE_CONSTANT_WREV(target, EFBIG);
#endif


//#define	ENOSPC		28	/* No space left on device */
#ifdef ENOSPC
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOSPC);
#endif


//#define	ESPIPE		29	/* Illegal seek */
#ifdef ESPIPE
_ERRCMN_DEFINE_CONSTANT_WREV(target, ESPIPE);
#endif


//#define	EROFS		30	/* Read-only file system */
#ifdef EROFS
_ERRCMN_DEFINE_CONSTANT_WREV(target, EROFS);
#endif



//#define	EMLINK		31	/* Too many links */
#ifdef EMLINK
_ERRCMN_DEFINE_CONSTANT_WREV(target, EMLINK);
#endif




//#define	EPIPE		32	/* Broken pipe */
#ifdef EPIPE
_ERRCMN_DEFINE_CONSTANT_WREV(target, EPIPE);
#endif


//#define	EDOM		33	/* Math argument out of domain of func */
#ifdef EDOM
_ERRCMN_DEFINE_CONSTANT_WREV(target, EDOM);
#endif


//#define	ERANGE		34	/* Math result not representable */
#ifdef ERANGE
_ERRCMN_DEFINE_CONSTANT_WREV(target, ERANGE);
#endif



//#define	EDEADLK		35	/* Resource deadlock would occur */
#ifdef EDEADLK
_ERRCMN_DEFINE_CONSTANT_WREV(target, EDEADLK);
#endif



//#define	ENAMETOOLONG	36	/* File name too long */
#ifdef ENAMETOOLONG
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENAMETOOLONG);
#endif


//#define	ENOLCK		37	/* No record locks available */
#ifdef ENOLCK
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOLCK);
#endif

//#define	ENOSYS		38	/* Function not implemented */
#ifdef ENOSYS
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOSYS);
#endif

//#define	ENOTEMPTY	39	/* Directory not empty */
#ifdef ENOTEMPTY
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOTEMPTY);
#endif

//#define	ELOOP		40	/* Too many symbolic links encountered */
#ifdef ELOOP
_ERRCMN_DEFINE_CONSTANT_WREV(target, ELOOP);
#endif

//#define	EWOULDBLOCK	EAGAIN	/* Operation would block */

//#define	ENOMSG		42	/* No message of desired type */
#ifdef ENOMSG
_ERRCMN_DEFINE_CONSTANT_WREV(target, ENOMSG);
#endif

//#define	EIDRM		43	/* Identifier removed */
#ifdef EIDRM
_ERRCMN_DEFINE_CONSTANT_WREV(target, EIDRM);
#endif


//#define	ECHRNG		44	/* Channel number out of range */
#ifdef ECHRNG
_ERRCMN_DEFINE_CONSTANT_WREV(target, ECHRNG);
#endif

//#define	EL2NSYNC	45	/* Level 2 not synchronized */
#ifdef EL2NSYNC
_ERRCMN_DEFINE_CONSTANT_WREV(target, ECHRNG);
#endif

//#define	EL3HLT		46	/* Level 3 halted */
#ifdef EL3HLT
_ERRCMN_DEFINE_CONSTANT_WREV(target, EL3HLT);
#endif

//#define	EL3RST		47	/* Level 3 reset */
#ifdef EL3RST
_ERRCMN_DEFINE_CONSTANT_WREV(target, EL3RST);
#endif

//#define	ELNRNG		48	/* Link number out of range */
#ifdef ELNRNG
_ERRCMN_DEFINE_CONSTANT_WREV(target, ELNRNG);
#endif


//#define	EUNATCH		49	/* Protocol driver not attached */
#ifdef EUNATCH
_ERRCMN_DEFINE_CONSTANT_WREV(target, EUNATCH);
#endif




//#define	ENOCSI		50	/* No CSI structure available */
//#define	EL2HLT		51	/* Level 2 halted */
//#define	EBADE		52	/* Invalid exchange */
//#define	EBADR		53	/* Invalid request descriptor */
//#define	EXFULL		54	/* Exchange full */
//#define	ENOANO		55	/* No anode */
//#define	EBADRQC		56	/* Invalid request code */
//#define	EBADSLT		57	/* Invalid slot */
//
//#define	EDEADLOCK	EDEADLK
//
//#define	EBFONT		59	/* Bad font file format */
//#define	ENOSTR		60	/* Device not a stream */
//#define	ENODATA		61	/* No data available */
//#define	ETIME		62	/* Timer expired */
//#define	ENOSR		63	/* Out of streams resources */
//#define	ENONET		64	/* Machine is not on the network */
//#define	ENOPKG		65	/* Package not installed */
//#define	EREMOTE		66	/* Object is remote */
//#define	ENOLINK		67	/* Link has been severed */
//#define	EADV		68	/* Advertise error */
//#define	ESRMNT		69	/* Srmount error */
//#define	ECOMM		70	/* Communication error on send */
//#define	EPROTO		71	/* Protocol error */
//#define	EMULTIHOP	72	/* Multihop attempted */
//#define	EDOTDOT		73	/* RFS specific error */
//#define	EBADMSG		74	/* Not a data message */
//#define	EOVERFLOW	75	/* Value too large for defined data type */
//#define	ENOTUNIQ	76	/* Name not unique on network */
//#define	EBADFD		77	/* File descriptor in bad state */
//#define	EREMCHG		78	/* Remote address changed */
//#define	ELIBACC		79	/* Can not access a needed shared library */
//#define	ELIBBAD		80	/* Accessing a corrupted shared library */
//#define	ELIBSCN		81	/* .lib section in a.out corrupted */
//#define	ELIBMAX		82	/* Attempting to link in too many shared libraries */
//#define	ELIBEXEC	83	/* Cannot exec a shared library directly */
//#define	EILSEQ		84	/* Illegal byte sequence */
//#define	ERESTART	85	/* Interrupted system call should be restarted */
//#define	ESTRPIPE	86	/* Streams pipe error */
//#define	EUSERS		87	/* Too many users */
//#define	ENOTSOCK	88	/* Socket operation on non-socket */
//#define	EDESTADDRREQ	89	/* Destination address required */
//#define	EMSGSIZE	90	/* Message too long */
//#define	EPROTOTYPE	91	/* Protocol wrong type for socket */
//#define	ENOPROTOOPT	92	/* Protocol not available */
//#define	EPROTONOSUPPORT	93	/* Protocol not supported */
//#define	ESOCKTNOSUPPORT	94	/* Socket type not supported */
//#define	EOPNOTSUPP	95	/* Operation not supported on transport endpoint */
//#define	EPFNOSUPPORT	96	/* Protocol family not supported */
//#define	EAFNOSUPPORT	97	/* Address family not supported by protocol */
//#define	EADDRINUSE	98	/* Address already in use */
//#define	EADDRNOTAVAIL	99	/* Cannot assign requested address */
//#define	ENETDOWN	100	/* Network is down */
//#define	ENETUNREACH	101	/* Network is unreachable */
//#define	ENETRESET	102	/* Network dropped connection because of reset */
//#define	ECONNABORTED	103	/* Software caused connection abort */
//#define	ECONNRESET	104	/* Connection reset by peer */



//#define	EISCONN		106	/* Transport endpoint is already connected */
//#define	ENOTCONN	107	/* Transport endpoint is not connected */
//#define	ESHUTDOWN	108	/* Cannot send after transport endpoint shutdown */
//#define	ETOOMANYREFS	109	/* Too many references: cannot splice */
//#define	ETIMEDOUT	110	/* Connection timed out */
//#define	ECONNREFUSED	111	/* Connection refused */
//#define	EHOSTDOWN	112	/* Host is down */
//#define	EHOSTUNREACH	113	/* No route to host */
//#define	EALREADY	114	/* Operation already in progress */
//#define	EINPROGRESS	115	/* Operation now in progress */
//#define	ESTALE		116	/* Stale NFS file handle */
//#define	EUCLEAN		117	/* Structure needs cleaning */
//#define	ENOTNAM		118	/* Not a XENIX named type file */
//#define	ENAVAIL		119	/* No XENIX semaphores available */
//#define	EISNAM		120	/* Is a named type file */
//#define	EREMOTEIO	121	/* Remote I/O error */
//#define	EDQUOT		122	/* Quota exceeded */
//
//#define	ENOMEDIUM	123	/* No medium found */
//#define	EMEDIUMTYPE	124	/* Wrong medium type */


//--------------------------------------------------------

}



	const int max_error_buf = 255;

	char *get_error_str(int _errno) {
		char *ret = (char *) malloc(max_error_buf);
		int r = strerror_r(_errno,ret,max_error_buf);
		if ( r != 0 ) DBG_OUT("strerror_r bad return: %d\n",r);
		return ret;
	}

	void free_error_str(char *b) {
		free(b);
	}

	v8::Local<v8::Object> errno_to_JS(int _errno, char *prefix) {
		v8::Local<v8::Object> retobj = v8::Object::New();

		if(_errno) {
			char *temp = NULL;
			if(_errno < _ERRCMD_CUSTOM_ERROR_CUTOFF) {
				char *errstr = get_error_str(_errno);
				if(prefix) {
					temp = (char *) malloc(strlen(prefix)+strlen(errstr));
						memset(temp,0,len);
					strcpy(temp, prefix);
					strcat(temp, errstr);
				} else {
					temp = errstr;
				}
				retobj->Set(v8::String::New("message"), v8::String::New(temp));
				free_error_str(errstr);
			}
			retobj->Set(v8::String::New("errno"), v8::Integer::New(_errno));
		}
		return retobj;
	}

}

