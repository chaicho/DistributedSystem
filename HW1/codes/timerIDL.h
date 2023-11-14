/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _TIMERIDL_H_RPCGEN
#define _TIMERIDL_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define TIMER_PROG 0x20000001
#define TIME_VERS 1
#define INTERVAL 5 // interval in seconds to collect and send time


#if defined(__STDC__) || defined(__cplusplus)
#define GET_TIME 1
extern  long * get_time_1(void *, CLIENT *);
extern  long * get_time_1_svc(void *, struct svc_req *);
#define SET_TIME 2
extern  void * set_time_1(long *, CLIENT *);
extern  void * set_time_1_svc(long *, struct svc_req *);
extern int timer_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define GET_TIME 1
extern  long * get_time_1();
extern  long * get_time_1_svc();
#define SET_TIME 2
extern  void * set_time_1();
extern  void * set_time_1_svc();
extern int timer_prog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_TIMERIDL_H_RPCGEN */
