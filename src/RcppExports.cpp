// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// VIF_
arma::vec VIF_(arma::mat& x, int posit_y, arma::uvec posit_x, arma::uvec posit_x_var, bool correct);
RcppExport SEXP _miceFast_VIF_(SEXP xSEXP, SEXP posit_ySEXP, SEXP posit_xSEXP, SEXP posit_x_varSEXP, SEXP correctSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type posit_y(posit_ySEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type posit_x(posit_xSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type posit_x_var(posit_x_varSEXP);
    Rcpp::traits::input_parameter< bool >::type correct(correctSEXP);
    rcpp_result_gen = Rcpp::wrap(VIF_(x, posit_y, posit_x, posit_x_var, correct));
    return rcpp_result_gen;
END_RCPP
}
// fill_NA_N_
arma::colvec fill_NA_N_(arma::mat& x, std::string model, int posit_y, arma::uvec posit_x, arma::colvec w, int times);
RcppExport SEXP _miceFast_fill_NA_N_(SEXP xSEXP, SEXP modelSEXP, SEXP posit_ySEXP, SEXP posit_xSEXP, SEXP wSEXP, SEXP timesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type posit_y(posit_ySEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type posit_x(posit_xSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type times(timesSEXP);
    rcpp_result_gen = Rcpp::wrap(fill_NA_N_(x, model, posit_y, posit_x, w, times));
    return rcpp_result_gen;
END_RCPP
}
// fill_NA_
arma::colvec fill_NA_(arma::mat& x, std::string model, int posit_y, arma::uvec posit_x, arma::colvec w);
RcppExport SEXP _miceFast_fill_NA_(SEXP xSEXP, SEXP modelSEXP, SEXP posit_ySEXP, SEXP posit_xSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type posit_y(posit_ySEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type posit_x(posit_xSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(fill_NA_(x, model, posit_y, posit_x, w));
    return rcpp_result_gen;
END_RCPP
}
// neibo
NumericVector neibo(NumericVector y, NumericVector miss, int k);
RcppExport SEXP _miceFast_neibo(SEXP ySEXP, SEXP missSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type miss(missSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(neibo(y, miss, k));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_corrData();
RcppExport SEXP _rcpp_module_boot_miceFast();

static const R_CallMethodDef CallEntries[] = {
    {"_miceFast_VIF_", (DL_FUNC) &_miceFast_VIF_, 5},
    {"_miceFast_fill_NA_N_", (DL_FUNC) &_miceFast_fill_NA_N_, 6},
    {"_miceFast_fill_NA_", (DL_FUNC) &_miceFast_fill_NA_, 5},
    {"_miceFast_neibo", (DL_FUNC) &_miceFast_neibo, 3},
    {"_rcpp_module_boot_corrData", (DL_FUNC) &_rcpp_module_boot_corrData, 0},
    {"_rcpp_module_boot_miceFast", (DL_FUNC) &_rcpp_module_boot_miceFast, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_miceFast(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
