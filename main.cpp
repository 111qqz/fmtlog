
#define FMTLOG_HEADER_ONLY
#include "fmtlog/fmtlog.h"
int main() { FMTLOG(fmtlog::INF, "The answer is {}.", 42); }