// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;


RcppExport SEXP _rcpp_module_boot_corrData();
RcppExport SEXP _rcpp_module_boot_miceFast();

static const R_CallMethodDef CallEntries[] = {
    {"_rcpp_module_boot_corrData", (DL_FUNC) &_rcpp_module_boot_corrData, 0},
    {"_rcpp_module_boot_miceFast", (DL_FUNC) &_rcpp_module_boot_miceFast, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_miceFast(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
