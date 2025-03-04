// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// InfluenceKM
SEXP InfluenceKM(const arma::colvec idx, const arma::colvec status, const arma::colvec time, const float trunc_time);
RcppExport SEXP _SurvUtils_InfluenceKM(SEXP idxSEXP, SEXP statusSEXP, SEXP timeSEXP, SEXP trunc_timeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec >::type idx(idxSEXP);
    Rcpp::traits::input_parameter< const arma::colvec >::type status(statusSEXP);
    Rcpp::traits::input_parameter< const arma::colvec >::type time(timeSEXP);
    Rcpp::traits::input_parameter< const float >::type trunc_time(trunc_timeSEXP);
    rcpp_result_gen = Rcpp::wrap(InfluenceKM(idx, status, time, trunc_time));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SurvUtils_InfluenceKM", (DL_FUNC) &_SurvUtils_InfluenceKM, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_SurvUtils(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
