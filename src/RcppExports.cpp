// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// matchPsInternal
DataFrame matchPsInternal(std::vector<double> propensityScores, std::vector<int> treatment, unsigned int maxRatio, double caliper);
RcppExport SEXP _CohortMethod_matchPsInternal(SEXP propensityScoresSEXP, SEXP treatmentSEXP, SEXP maxRatioSEXP, SEXP caliperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type propensityScores(propensityScoresSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type treatment(treatmentSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type maxRatio(maxRatioSEXP);
    Rcpp::traits::input_parameter< double >::type caliper(caliperSEXP);
    rcpp_result_gen = Rcpp::wrap(matchPsInternal(propensityScores, treatment, maxRatio, caliper));
    return rcpp_result_gen;
END_RCPP
}
// aucWithCi
std::vector<double> aucWithCi(std::vector<double> propensityScores, std::vector<int> treatment);
RcppExport SEXP _CohortMethod_aucWithCi(SEXP propensityScoresSEXP, SEXP treatmentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type propensityScores(propensityScoresSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type treatment(treatmentSEXP);
    rcpp_result_gen = Rcpp::wrap(aucWithCi(propensityScores, treatment));
    return rcpp_result_gen;
END_RCPP
}
// aucWithoutCi
double aucWithoutCi(std::vector<double> propensityScores, std::vector<int> treatment);
RcppExport SEXP _CohortMethod_aucWithoutCi(SEXP propensityScoresSEXP, SEXP treatmentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type propensityScores(propensityScoresSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type treatment(treatmentSEXP);
    rcpp_result_gen = Rcpp::wrap(aucWithoutCi(propensityScores, treatment));
    return rcpp_result_gen;
END_RCPP
}
// bySumFf
DataFrame bySumFf(List ffValues, List ffBins);
RcppExport SEXP _CohortMethod_bySumFf(SEXP ffValuesSEXP, SEXP ffBinsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type ffValues(ffValuesSEXP);
    Rcpp::traits::input_parameter< List >::type ffBins(ffBinsSEXP);
    rcpp_result_gen = Rcpp::wrap(bySumFf(ffValues, ffBins));
    return rcpp_result_gen;
END_RCPP
}
// adjustedKm
DataFrame adjustedKm(const std::vector<int>& stratumId, const std::vector<int>& time, const std::vector<int>& y, int nBootstrap);
RcppExport SEXP _CohortMethod_adjustedKm(SEXP stratumIdSEXP, SEXP timeSEXP, SEXP ySEXP, SEXP nBootstrapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<int>& >::type stratumId(stratumIdSEXP);
    Rcpp::traits::input_parameter< const std::vector<int>& >::type time(timeSEXP);
    Rcpp::traits::input_parameter< const std::vector<int>& >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type nBootstrap(nBootstrapSEXP);
    rcpp_result_gen = Rcpp::wrap(adjustedKm(stratumId, time, y, nBootstrap));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CohortMethod_matchPsInternal", (DL_FUNC) &_CohortMethod_matchPsInternal, 4},
    {"_CohortMethod_aucWithCi", (DL_FUNC) &_CohortMethod_aucWithCi, 2},
    {"_CohortMethod_aucWithoutCi", (DL_FUNC) &_CohortMethod_aucWithoutCi, 2},
    {"_CohortMethod_bySumFf", (DL_FUNC) &_CohortMethod_bySumFf, 2},
    {"_CohortMethod_adjustedKm", (DL_FUNC) &_CohortMethod_adjustedKm, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_CohortMethod(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
