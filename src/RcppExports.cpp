// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/roptim.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// example1_rosen_bfgs
void example1_rosen_bfgs();
RcppExport SEXP _roptim_example1_rosen_bfgs() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    example1_rosen_bfgs();
    return R_NilValue;
END_RCPP
}
// example1_rosen_other_methods
void example1_rosen_other_methods();
RcppExport SEXP _roptim_example1_rosen_other_methods() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    example1_rosen_other_methods();
    return R_NilValue;
END_RCPP
}
// example1_rosen_grad_hess_check
void example1_rosen_grad_hess_check();
RcppExport SEXP _roptim_example1_rosen_grad_hess_check() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    example1_rosen_grad_hess_check();
    return R_NilValue;
END_RCPP
}
// example1_rosen_nograd_bfgs
void example1_rosen_nograd_bfgs();
RcppExport SEXP _roptim_example1_rosen_nograd_bfgs() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    example1_rosen_nograd_bfgs();
    return R_NilValue;
END_RCPP
}
// example2_sann_tsp
Rcpp::List example2_sann_tsp(arma::mat eurodistmat, arma::vec x);
RcppExport SEXP _roptim_example2_sann_tsp(SEXP eurodistmatSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type eurodistmat(eurodistmatSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(example2_sann_tsp(eurodistmat, x));
    return rcpp_result_gen;
END_RCPP
}
// example3_flb_25_dims_box_con
void example3_flb_25_dims_box_con();
RcppExport SEXP _roptim_example3_flb_25_dims_box_con() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    example3_flb_25_dims_box_con();
    return R_NilValue;
END_RCPP
}
// example4_wild_fun
void example4_wild_fun();
RcppExport SEXP _roptim_example4_wild_fun() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    example4_wild_fun();
    return R_NilValue;
END_RCPP
}
// example1_rosen_sann
void example1_rosen_sann();
RcppExport SEXP _roptim_example1_rosen_sann() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    example1_rosen_sann();
    return R_NilValue;
END_RCPP
}
// rcpp_hello
Rcpp::List rcpp_hello();
RcppExport SEXP _roptim_rcpp_hello() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_roptim_example1_rosen_bfgs", (DL_FUNC) &_roptim_example1_rosen_bfgs, 0},
    {"_roptim_example1_rosen_other_methods", (DL_FUNC) &_roptim_example1_rosen_other_methods, 0},
    {"_roptim_example1_rosen_grad_hess_check", (DL_FUNC) &_roptim_example1_rosen_grad_hess_check, 0},
    {"_roptim_example1_rosen_nograd_bfgs", (DL_FUNC) &_roptim_example1_rosen_nograd_bfgs, 0},
    {"_roptim_example2_sann_tsp", (DL_FUNC) &_roptim_example2_sann_tsp, 2},
    {"_roptim_example3_flb_25_dims_box_con", (DL_FUNC) &_roptim_example3_flb_25_dims_box_con, 0},
    {"_roptim_example4_wild_fun", (DL_FUNC) &_roptim_example4_wild_fun, 0},
    {"_roptim_example1_rosen_sann", (DL_FUNC) &_roptim_example1_rosen_sann, 0},
    {"_roptim_rcpp_hello", (DL_FUNC) &_roptim_rcpp_hello, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_roptim(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
