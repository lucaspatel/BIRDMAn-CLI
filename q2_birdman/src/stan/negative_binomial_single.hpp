
// Code generated by stanc v2.30.1
#include <stan/model/model_header.hpp>
namespace negative_binomial_single_model_namespace {

using stan::model::model_base_crtp;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 33> locations_array__ = 
{" (found before start of program)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 14, column 2 to column 40)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 15, column 2 to column 37)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 16, column 2 to column 25)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 20, column 2 to column 50)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 21, column 2 to column 39)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 33, column 2 to column 22)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 34, column 2 to column 22)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 37, column 4 to column 65)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 38, column 4 to column 73)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 36, column 16 to line 39, column 3)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 36, column 2 to line 39, column 3)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 25, column 2 to column 40)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 26, column 2 to column 26)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 27, column 2 to column 26)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 29, column 2 to column 45)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 2, column 2 to column 17)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 3, column 2 to column 17)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 4, column 2 to column 9)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 5, column 9 to column 10)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 5, column 2 to column 18)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 6, column 9 to column 10)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 6, column 12 to column 13)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 6, column 2 to column 17)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 7, column 8 to column 9)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 7, column 2 to column 17)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 9, column 2 to column 20)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 10, column 2 to column 28)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 15, column 25 to column 28)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 20, column 9 to column 10)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 21, column 9 to column 10)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 33, column 9 to column 10)",
 " (in '/home/lpatel/projects/2024-07-17_q2-birdman/q2-birdman-gh/q2_birdman/src/stan/negative_binomial_single.stan', line 34, column 9 to column 10)"};




class negative_binomial_single_model final : public model_base_crtp<negative_binomial_single_model> {

 private:
  int N;
  int p;
  double A;
  Eigen::Matrix<double, -1, 1> depth_data__;
  Eigen::Matrix<double, -1, -1> x_data__;
  std::vector<int> y;
  double B_p;
  double inv_disp_sd;
  int beta_x_1dim__; 
  Eigen::Map<Eigen::Matrix<double, -1, 1>> depth{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double, -1, -1>> x{nullptr, 0, 0};
 
 public:
  ~negative_binomial_single_model() { }
  
  inline std::string model_name() const final { return "negative_binomial_single_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.30.1", "stancflags = "};
  }
  
  
  negative_binomial_single_model(stan::io::var_context& context__,
                                 unsigned int random_seed__ = 0,
                                 std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "negative_binomial_single_model_namespace::negative_binomial_single_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 16;
      context__.validate_dims("data initialization","N","int",
           std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      
      
      current_statement__ = 16;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 16;
      stan::math::check_greater_or_equal(function__, "N", N, 0);
      current_statement__ = 17;
      context__.validate_dims("data initialization","p","int",
           std::vector<size_t>{});
      p = std::numeric_limits<int>::min();
      
      
      current_statement__ = 17;
      p = context__.vals_i("p")[(1 - 1)];
      current_statement__ = 17;
      stan::math::check_greater_or_equal(function__, "p", p, 0);
      current_statement__ = 18;
      context__.validate_dims("data initialization","A","double",
           std::vector<size_t>{});
      A = std::numeric_limits<double>::quiet_NaN();
      
      
      current_statement__ = 18;
      A = context__.vals_r("A")[(1 - 1)];
      current_statement__ = 19;
      stan::math::validate_non_negative_index("depth", "N", N);
      current_statement__ = 20;
      context__.validate_dims("data initialization","depth","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      depth_data__ = 
        Eigen::Matrix<double, -1, 1>::Constant(N,
          std::numeric_limits<double>::quiet_NaN());
      new (&depth) Eigen::Map<Eigen::Matrix<double, -1, 1>>(depth_data__.data(), N);
        
      
      {
        std::vector<local_scalar_t__> depth_flat__;
        current_statement__ = 20;
        depth_flat__ = context__.vals_r("depth");
        current_statement__ = 20;
        pos__ = 1;
        current_statement__ = 20;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 20;
          stan::model::assign(depth, depth_flat__[(pos__ - 1)],
            "assigning variable depth", stan::model::index_uni(sym1__));
          current_statement__ = 20;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 21;
      stan::math::validate_non_negative_index("x", "N", N);
      current_statement__ = 22;
      stan::math::validate_non_negative_index("x", "p", p);
      current_statement__ = 23;
      context__.validate_dims("data initialization","x","double",
           std::vector<size_t>{static_cast<size_t>(N),
            static_cast<size_t>(p)});
      x_data__ = 
        Eigen::Matrix<double, -1, -1>::Constant(N, p,
          std::numeric_limits<double>::quiet_NaN());
      new (&x) Eigen::Map<Eigen::Matrix<double, -1, -1>>(x_data__.data(), N, p);
        
      
      {
        std::vector<local_scalar_t__> x_flat__;
        current_statement__ = 23;
        x_flat__ = context__.vals_r("x");
        current_statement__ = 23;
        pos__ = 1;
        current_statement__ = 23;
        for (int sym1__ = 1; sym1__ <= p; ++sym1__) {
          current_statement__ = 23;
          for (int sym2__ = 1; sym2__ <= N; ++sym2__) {
            current_statement__ = 23;
            stan::model::assign(x, x_flat__[(pos__ - 1)],
              "assigning variable x", stan::model::index_uni(sym2__),
                                        stan::model::index_uni(sym1__));
            current_statement__ = 23;
            pos__ = (pos__ + 1);
          }
        }
      }
      current_statement__ = 24;
      stan::math::validate_non_negative_index("y", "N", N);
      current_statement__ = 25;
      context__.validate_dims("data initialization","y","int",
           std::vector<size_t>{static_cast<size_t>(N)});
      y = std::vector<int>(N, std::numeric_limits<int>::min());
      
      
      current_statement__ = 25;
      y = context__.vals_i("y");
      current_statement__ = 26;
      context__.validate_dims("data initialization","B_p","double",
           std::vector<size_t>{});
      B_p = std::numeric_limits<double>::quiet_NaN();
      
      
      current_statement__ = 26;
      B_p = context__.vals_r("B_p")[(1 - 1)];
      current_statement__ = 26;
      stan::math::check_greater_or_equal(function__, "B_p", B_p, 0);
      current_statement__ = 27;
      context__.validate_dims("data initialization","inv_disp_sd","double",
           std::vector<size_t>{});
      inv_disp_sd = std::numeric_limits<double>::quiet_NaN();
      
      
      current_statement__ = 27;
      inv_disp_sd = context__.vals_r("inv_disp_sd")[(1 - 1)];
      current_statement__ = 27;
      stan::math::check_greater_or_equal(function__, "inv_disp_sd",
                                            inv_disp_sd, 0);
      current_statement__ = 28;
      beta_x_1dim__ = std::numeric_limits<int>::min();
      
      
      current_statement__ = 28;
      beta_x_1dim__ = (p - 1);
      current_statement__ = 28;
      stan::math::validate_non_negative_index("beta_x", "p - 1",
                                              beta_x_1dim__);
      current_statement__ = 29;
      stan::math::validate_non_negative_index("beta_var", "p", p);
      current_statement__ = 30;
      stan::math::validate_non_negative_index("lam", "N", N);
      current_statement__ = 31;
      stan::math::validate_non_negative_index("log_lhood", "N", N);
      current_statement__ = 32;
      stan::math::validate_non_negative_index("y_predict", "N", N);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + beta_x_1dim__ + 1;
    
  }
  
  template <bool propto__, bool jacobian__ , typename VecR, typename VecI, 
  stan::require_vector_like_t<VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "negative_binomial_single_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      local_scalar_t__ beta_0 = DUMMY_VAR__;
      current_statement__ = 1;
      beta_0 = in__.template read_constrain_offset_multiplier<
                 local_scalar_t__, jacobian__>(A, B_p, lp__);
      Eigen::Matrix<local_scalar_t__, -1, 1> beta_x =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(beta_x_1dim__,
           DUMMY_VAR__);
      current_statement__ = 2;
      beta_x = in__.template read_constrain_offset_multiplier<
                 Eigen::Matrix<local_scalar_t__, -1, 1>, jacobian__>(0, B_p,
                 lp__, beta_x_1dim__);
      local_scalar_t__ inv_disp = DUMMY_VAR__;
      current_statement__ = 3;
      inv_disp = in__.template read_constrain_lb<local_scalar_t__, 
                   jacobian__>(0, lp__);
      Eigen::Matrix<local_scalar_t__, -1, 1> beta_var =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(p, DUMMY_VAR__);
      current_statement__ = 4;
      stan::model::assign(beta_var, stan::math::append_row(beta_0, beta_x),
        "assigning variable beta_var");
      Eigen::Matrix<local_scalar_t__, -1, 1> lam =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(N, DUMMY_VAR__);
      current_statement__ = 5;
      stan::model::assign(lam,
        stan::math::add(stan::math::multiply(x, beta_var), depth),
        "assigning variable lam");
      {
        current_statement__ = 12;
        lp_accum__.add(
          stan::math::lognormal_lpdf<propto__>(inv_disp, 0., inv_disp_sd));
        current_statement__ = 13;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(beta_0, A, B_p));
        current_statement__ = 14;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(beta_x, 0, B_p));
        current_statement__ = 15;
        lp_accum__.add(
          stan::math::neg_binomial_2_log_lpmf<propto__>(y, lam,
            stan::math::inv(inv_disp)));
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, 
  stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, 
  stan::require_vector_vt<std::is_floating_point, VecVar>* = nullptr> 
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    (void) propto__;
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    int current_statement__ = 0; 
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    constexpr bool jacobian__ = false;
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "negative_binomial_single_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      double beta_0 = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      beta_0 = in__.template read_constrain_offset_multiplier<
                 local_scalar_t__, jacobian__>(A, B_p, lp__);
      Eigen::Matrix<double, -1, 1> beta_x =
         Eigen::Matrix<double, -1, 1>::Constant(beta_x_1dim__,
           std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 2;
      beta_x = in__.template read_constrain_offset_multiplier<
                 Eigen::Matrix<local_scalar_t__, -1, 1>, jacobian__>(0, B_p,
                 lp__, beta_x_1dim__);
      double inv_disp = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      inv_disp = in__.template read_constrain_lb<local_scalar_t__, 
                   jacobian__>(0, lp__);
      Eigen::Matrix<double, -1, 1> beta_var =
         Eigen::Matrix<double, -1, 1>::Constant(p,
           std::numeric_limits<double>::quiet_NaN());
      Eigen::Matrix<double, -1, 1> lam =
         Eigen::Matrix<double, -1, 1>::Constant(N,
           std::numeric_limits<double>::quiet_NaN());
      out__.write(beta_0);
      out__.write(beta_x);
      out__.write(inv_disp);
      if (stan::math::logical_negation((stan::math::primitive_value(
            emit_transformed_parameters__) || stan::math::primitive_value(
            emit_generated_quantities__)))) {
        return ;
      } 
      current_statement__ = 4;
      stan::model::assign(beta_var, stan::math::append_row(beta_0, beta_x),
        "assigning variable beta_var");
      current_statement__ = 5;
      stan::model::assign(lam,
        stan::math::add(stan::math::multiply(x, beta_var), depth),
        "assigning variable lam");
      if (emit_transformed_parameters__) {
        out__.write(beta_var);
        out__.write(lam);
      } 
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      Eigen::Matrix<double, -1, 1> log_lhood =
         Eigen::Matrix<double, -1, 1>::Constant(N,
           std::numeric_limits<double>::quiet_NaN());
      Eigen::Matrix<double, -1, 1> y_predict =
         Eigen::Matrix<double, -1, 1>::Constant(N,
           std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 11;
      for (int n = 1; n <= N; ++n) {
        current_statement__ = 8;
        stan::model::assign(y_predict,
          stan::math::neg_binomial_2_log_rng(
            stan::model::rvalue(lam, "lam", stan::model::index_uni(n)),
            stan::math::inv(inv_disp), base_rng__),
          "assigning variable y_predict", stan::model::index_uni(n));
        current_statement__ = 9;
        stan::model::assign(log_lhood,
          stan::math::neg_binomial_2_log_lpmf<false>(
            stan::model::rvalue(y, "y", stan::model::index_uni(n)),
            stan::model::rvalue(lam, "lam", stan::model::index_uni(n)),
            stan::math::inv(inv_disp)),
          "assigning variable log_lhood", stan::model::index_uni(n));
      }
      out__.write(log_lhood);
      out__.write(y_predict);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, 
  stan::require_vector_t<VecVar>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline void transform_inits_impl(VecVar& params_r__, VecI& params_i__,
                                   VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ beta_0 = DUMMY_VAR__;
      beta_0 = in__.read<local_scalar_t__>();
      out__.write_free_offset_multiplier(A, B_p, beta_0);
      Eigen::Matrix<local_scalar_t__, -1, 1> beta_x =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(beta_x_1dim__,
           DUMMY_VAR__);
      for (int sym1__ = 1; sym1__ <= beta_x_1dim__; ++sym1__) {
        stan::model::assign(beta_x, in__.read<local_scalar_t__>(),
          "assigning variable beta_x", stan::model::index_uni(sym1__));
      }
      out__.write_free_offset_multiplier(0, B_p, beta_x);
      local_scalar_t__ inv_disp = DUMMY_VAR__;
      inv_disp = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, inv_disp);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"beta_0", "beta_x", "inv_disp",
      "beta_var", "lam", "log_lhood", "y_predict"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
      std::vector<size_t>{static_cast<size_t>(beta_x_1dim__)},
      std::vector<size_t>{}, std::vector<size_t>{static_cast<size_t>(p)},
      std::vector<size_t>{static_cast<size_t>(N)},
      std::vector<size_t>{static_cast<size_t>(N)},
      std::vector<size_t>{static_cast<size_t>(N)}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "beta_0");
    for (int sym1__ = 1; sym1__ <= beta_x_1dim__; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "beta_x" + '.' + std::to_string(sym1__));
      } 
    }
    param_names__.emplace_back(std::string() + "inv_disp");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= p; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "beta_var" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "lam" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lhood" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y_predict" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "beta_0");
    for (int sym1__ = 1; sym1__ <= beta_x_1dim__; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "beta_x" + '.' + std::to_string(sym1__));
      } 
    }
    param_names__.emplace_back(std::string() + "inv_disp");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= p; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "beta_var" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "lam" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lhood" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "y_predict" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"beta_0\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta_x\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(beta_x_1dim__) + "},\"block\":\"parameters\"},{\"name\":\"inv_disp\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta_var\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(p) + "},\"block\":\"transformed_parameters\"},{\"name\":\"lam\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"transformed_parameters\"},{\"name\":\"log_lhood\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"},{\"name\":\"y_predict\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"beta_0\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta_x\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(beta_x_1dim__) + "},\"block\":\"parameters\"},{\"name\":\"inv_disp\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta_var\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(p) + "},\"block\":\"transformed_parameters\"},{\"name\":\"lam\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"transformed_parameters\"},{\"name\":\"log_lhood\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"},{\"name\":\"y_predict\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"}]");
    
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  ((1 + beta_x_1dim__) + 1);
      const size_t num_transformed = emit_transformed_parameters * 
  (p + N);
      const size_t num_gen_quantities = emit_generated_quantities * 
  (N + N);
      const size_t num_to_write = num_params__ + num_transformed +
        num_gen_quantities;
      std::vector<int> params_i;
      vars = Eigen::Matrix<double, Eigen::Dynamic, 1>::Constant(num_to_write,
        std::numeric_limits<double>::quiet_NaN());
      write_array_impl(base_rng, params_r, params_i, vars,
        emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  ((1 + beta_x_1dim__) + 1);
      const size_t num_transformed = emit_transformed_parameters * 
  (p + N);
      const size_t num_gen_quantities = emit_generated_quantities * 
  (N + N);
      const size_t num_to_write = num_params__ + num_transformed +
        num_gen_quantities;
      vars = std::vector<double>(num_to_write,
        std::numeric_limits<double>::quiet_NaN());
      write_array_impl(base_rng, params_r, params_i, vars,
        emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }

    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }


    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits(context, params_i, params_r_vec, pstream);
      params_r = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        params_r_vec.data(), params_r_vec.size());
    }

  inline void transform_inits(const stan::io::var_context& context,
                              std::vector<int>& params_i,
                              std::vector<double>& vars,
                              std::ostream* pstream__ = nullptr) const {
     constexpr std::array<const char*, 3> names__{"beta_0", "beta_x",
      "inv_disp"};
      const std::array<Eigen::Index, 3> constrain_param_sizes__{1,
       beta_x_1dim__, 1};
      const auto num_constrained_params__ = std::accumulate(
        constrain_param_sizes__.begin(), constrain_param_sizes__.end(), 0);
    
     std::vector<double> params_r_flat__(num_constrained_params__);
     Eigen::Index size_iter__ = 0;
     Eigen::Index flat_iter__ = 0;
     for (auto&& param_name__ : names__) {
       const auto param_vec__ = context.vals_r(param_name__);
       for (Eigen::Index i = 0; i < constrain_param_sizes__[size_iter__]; ++i) {
         params_r_flat__[flat_iter__] = param_vec__[i];
         ++flat_iter__;
       }
       ++size_iter__;
     }
     vars.resize(num_params_r__);
     transform_inits_impl(params_r_flat__, params_i, vars, pstream__);
    } // transform_inits() 
    
};
}

using stan_model = negative_binomial_single_model_namespace::negative_binomial_single_model;

#ifndef USING_R

// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

stan::math::profile_map& get_stan_profile_data() {
  return negative_binomial_single_model_namespace::profiles__;
}

#endif


