#ifndef __USAGE_H__
#define __USAGE_H__

#include "version.h"
static const char *usage_str = \
"GPUtrip v%s\n" \
"Usage: %s <options> [target file] <output>\n" \
"\n" \
"options:\n" \
" -i            : Be case insensitive\n" \
" ptarget file] : Newline separated list of targets. Regexp or string form.\n" \
" <output>      : File to output matches to (if unspecified, stdout)\n";

#endif

