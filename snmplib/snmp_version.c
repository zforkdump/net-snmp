#include <net-snmp/net-snmp-config.h>
#include <net-snmp/version.h>

/* expose ONLY for benefit of grandfathered code */
#ifndef UCD_COMPATIBLE
static
#endif
const char     *NetSnmpVersionInfo = "5.3.1.dev";

const char     *
netsnmp_get_version()
{
    return NetSnmpVersionInfo;
}
