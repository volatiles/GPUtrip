#ifndef __COMMON_H__
#define __COMMON_H__

#define GPUTRIP_VERSION "NaN"

static const char *usage_str = \
"GPUtrip v%s\n" \
"Usage: %s <options> [target file] <output>\n" \
"\n" \
"options:\n" \
" -i            : Be case insensitive\n" \
" ptarget file] : Newline separated list of targets. Regexp or string form.\n" \
" <output>      : File to output matches to (if unspecified, stdout)\n";

#endif

