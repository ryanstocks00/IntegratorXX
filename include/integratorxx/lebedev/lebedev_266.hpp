namespace IntegratorXX {
namespace LebedevGrids {

/**
 *  \brief Lebedev-Laikov Quadrature specification for Order = 266
 * 
 */
template <typename T>
struct lebedev_266 {

  static constexpr std::array<cartesian_pt_t<T>,266> points = {
      1.000000000000000e+00,      0.000000000000000e+00,      0.000000000000000e+00,
     -1.000000000000000e+00,      0.000000000000000e+00,      0.000000000000000e+00,
      0.000000000000000e+00,      1.000000000000000e+00,      0.000000000000000e+00,
      0.000000000000000e+00,     -1.000000000000000e+00,      0.000000000000000e+00,
      0.000000000000000e+00,      0.000000000000000e+00,      1.000000000000000e+00,
      0.000000000000000e+00,      0.000000000000000e+00,     -1.000000000000000e+00,
      0.000000000000000e+00,      7.071067811865476e-01,      7.071067811865476e-01,
      0.000000000000000e+00,     -7.071067811865476e-01,      7.071067811865476e-01,
      0.000000000000000e+00,      7.071067811865476e-01,     -7.071067811865476e-01,
      0.000000000000000e+00,     -7.071067811865476e-01,     -7.071067811865476e-01,
      7.071067811865476e-01,      0.000000000000000e+00,      7.071067811865476e-01,
     -7.071067811865476e-01,      0.000000000000000e+00,      7.071067811865476e-01,
      7.071067811865476e-01,      0.000000000000000e+00,     -7.071067811865476e-01,
     -7.071067811865476e-01,      0.000000000000000e+00,     -7.071067811865476e-01,
      7.071067811865476e-01,      7.071067811865476e-01,      0.000000000000000e+00,
     -7.071067811865476e-01,      7.071067811865476e-01,      0.000000000000000e+00,
      7.071067811865476e-01,     -7.071067811865476e-01,      0.000000000000000e+00,
     -7.071067811865476e-01,     -7.071067811865476e-01,      0.000000000000000e+00,
      5.773502691896257e-01,      5.773502691896257e-01,      5.773502691896257e-01,
     -5.773502691896257e-01,      5.773502691896257e-01,      5.773502691896257e-01,
      5.773502691896257e-01,     -5.773502691896257e-01,      5.773502691896257e-01,
     -5.773502691896257e-01,     -5.773502691896257e-01,      5.773502691896257e-01,
      5.773502691896257e-01,      5.773502691896257e-01,     -5.773502691896257e-01,
     -5.773502691896257e-01,      5.773502691896257e-01,     -5.773502691896257e-01,
      5.773502691896257e-01,     -5.773502691896257e-01,     -5.773502691896257e-01,
     -5.773502691896257e-01,     -5.773502691896257e-01,     -5.773502691896257e-01,
      7.039373391585475e-01,      7.039373391585475e-01,      9.457507640371310e-02,
     -7.039373391585475e-01,      7.039373391585475e-01,      9.457507640371310e-02,
      7.039373391585475e-01,     -7.039373391585475e-01,      9.457507640371310e-02,
     -7.039373391585475e-01,     -7.039373391585475e-01,      9.457507640371310e-02,
      7.039373391585475e-01,      7.039373391585475e-01,     -9.457507640371310e-02,
     -7.039373391585475e-01,      7.039373391585475e-01,     -9.457507640371310e-02,
      7.039373391585475e-01,     -7.039373391585475e-01,     -9.457507640371310e-02,
     -7.039373391585475e-01,     -7.039373391585475e-01,     -9.457507640371310e-02,
      7.039373391585475e-01,      9.457507640371310e-02,      7.039373391585475e-01,
     -7.039373391585475e-01,      9.457507640371310e-02,      7.039373391585475e-01,
      7.039373391585475e-01,     -9.457507640371310e-02,      7.039373391585475e-01,
     -7.039373391585475e-01,     -9.457507640371310e-02,      7.039373391585475e-01,
      7.039373391585475e-01,      9.457507640371310e-02,     -7.039373391585475e-01,
     -7.039373391585475e-01,      9.457507640371310e-02,     -7.039373391585475e-01,
      7.039373391585475e-01,     -9.457507640371310e-02,     -7.039373391585475e-01,
     -7.039373391585475e-01,     -9.457507640371310e-02,     -7.039373391585475e-01,
      9.457507640371310e-02,      7.039373391585475e-01,      7.039373391585475e-01,
     -9.457507640371310e-02,      7.039373391585475e-01,      7.039373391585475e-01,
      9.457507640371310e-02,     -7.039373391585475e-01,      7.039373391585475e-01,
     -9.457507640371310e-02,     -7.039373391585475e-01,      7.039373391585475e-01,
      9.457507640371310e-02,      7.039373391585475e-01,     -7.039373391585475e-01,
     -9.457507640371310e-02,      7.039373391585475e-01,     -7.039373391585475e-01,
      9.457507640371310e-02,     -7.039373391585475e-01,     -7.039373391585475e-01,
     -9.457507640371310e-02,     -7.039373391585475e-01,     -7.039373391585475e-01,
      1.012526248572414e-01,      1.012526248572414e-01,      9.896948074629054e-01,
     -1.012526248572414e-01,      1.012526248572414e-01,      9.896948074629054e-01,
      1.012526248572414e-01,     -1.012526248572414e-01,      9.896948074629054e-01,
     -1.012526248572414e-01,     -1.012526248572414e-01,      9.896948074629054e-01,
      1.012526248572414e-01,      1.012526248572414e-01,     -9.896948074629054e-01,
     -1.012526248572414e-01,      1.012526248572414e-01,     -9.896948074629054e-01,
      1.012526248572414e-01,     -1.012526248572414e-01,     -9.896948074629054e-01,
     -1.012526248572414e-01,     -1.012526248572414e-01,     -9.896948074629054e-01,
      1.012526248572414e-01,      9.896948074629054e-01,      1.012526248572414e-01,
     -1.012526248572414e-01,      9.896948074629054e-01,      1.012526248572414e-01,
      1.012526248572414e-01,     -9.896948074629054e-01,      1.012526248572414e-01,
     -1.012526248572414e-01,     -9.896948074629054e-01,      1.012526248572414e-01,
      1.012526248572414e-01,      9.896948074629054e-01,     -1.012526248572414e-01,
     -1.012526248572414e-01,      9.896948074629054e-01,     -1.012526248572414e-01,
      1.012526248572414e-01,     -9.896948074629054e-01,     -1.012526248572414e-01,
     -1.012526248572414e-01,     -9.896948074629054e-01,     -1.012526248572414e-01,
      9.896948074629054e-01,      1.012526248572414e-01,      1.012526248572414e-01,
     -9.896948074629054e-01,      1.012526248572414e-01,      1.012526248572414e-01,
      9.896948074629054e-01,     -1.012526248572414e-01,      1.012526248572414e-01,
     -9.896948074629054e-01,     -1.012526248572414e-01,      1.012526248572414e-01,
      9.896948074629054e-01,      1.012526248572414e-01,     -1.012526248572414e-01,
     -9.896948074629054e-01,      1.012526248572414e-01,     -1.012526248572414e-01,
      9.896948074629054e-01,     -1.012526248572414e-01,     -1.012526248572414e-01,
     -9.896948074629054e-01,     -1.012526248572414e-01,     -1.012526248572414e-01,
      4.647448726420539e-01,      4.647448726420539e-01,      7.536739392508157e-01,
     -4.647448726420539e-01,      4.647448726420539e-01,      7.536739392508157e-01,
      4.647448726420539e-01,     -4.647448726420539e-01,      7.536739392508157e-01,
     -4.647448726420539e-01,     -4.647448726420539e-01,      7.536739392508157e-01,
      4.647448726420539e-01,      4.647448726420539e-01,     -7.536739392508157e-01,
     -4.647448726420539e-01,      4.647448726420539e-01,     -7.536739392508157e-01,
      4.647448726420539e-01,     -4.647448726420539e-01,     -7.536739392508157e-01,
     -4.647448726420539e-01,     -4.647448726420539e-01,     -7.536739392508157e-01,
      4.647448726420539e-01,      7.536739392508157e-01,      4.647448726420539e-01,
     -4.647448726420539e-01,      7.536739392508157e-01,      4.647448726420539e-01,
      4.647448726420539e-01,     -7.536739392508157e-01,      4.647448726420539e-01,
     -4.647448726420539e-01,     -7.536739392508157e-01,      4.647448726420539e-01,
      4.647448726420539e-01,      7.536739392508157e-01,     -4.647448726420539e-01,
     -4.647448726420539e-01,      7.536739392508157e-01,     -4.647448726420539e-01,
      4.647448726420539e-01,     -7.536739392508157e-01,     -4.647448726420539e-01,
     -4.647448726420539e-01,     -7.536739392508157e-01,     -4.647448726420539e-01,
      7.536739392508157e-01,      4.647448726420539e-01,      4.647448726420539e-01,
     -7.536739392508157e-01,      4.647448726420539e-01,      4.647448726420539e-01,
      7.536739392508157e-01,     -4.647448726420539e-01,      4.647448726420539e-01,
     -7.536739392508157e-01,     -4.647448726420539e-01,      4.647448726420539e-01,
      7.536739392508157e-01,      4.647448726420539e-01,     -4.647448726420539e-01,
     -7.536739392508157e-01,      4.647448726420539e-01,     -4.647448726420539e-01,
      7.536739392508157e-01,     -4.647448726420539e-01,     -4.647448726420539e-01,
     -7.536739392508157e-01,     -4.647448726420539e-01,     -4.647448726420539e-01,
      3.277420654971629e-01,      3.277420654971629e-01,      8.860983449974991e-01,
     -3.277420654971629e-01,      3.277420654971629e-01,      8.860983449974991e-01,
      3.277420654971629e-01,     -3.277420654971629e-01,      8.860983449974991e-01,
     -3.277420654971629e-01,     -3.277420654971629e-01,      8.860983449974991e-01,
      3.277420654971629e-01,      3.277420654971629e-01,     -8.860983449974991e-01,
     -3.277420654971629e-01,      3.277420654971629e-01,     -8.860983449974991e-01,
      3.277420654971629e-01,     -3.277420654971629e-01,     -8.860983449974991e-01,
     -3.277420654971629e-01,     -3.277420654971629e-01,     -8.860983449974991e-01,
      3.277420654971629e-01,      8.860983449974991e-01,      3.277420654971629e-01,
     -3.277420654971629e-01,      8.860983449974991e-01,      3.277420654971629e-01,
      3.277420654971629e-01,     -8.860983449974991e-01,      3.277420654971629e-01,
     -3.277420654971629e-01,     -8.860983449974991e-01,      3.277420654971629e-01,
      3.277420654971629e-01,      8.860983449974991e-01,     -3.277420654971629e-01,
     -3.277420654971629e-01,      8.860983449974991e-01,     -3.277420654971629e-01,
      3.277420654971629e-01,     -8.860983449974991e-01,     -3.277420654971629e-01,
     -3.277420654971629e-01,     -8.860983449974991e-01,     -3.277420654971629e-01,
      8.860983449974991e-01,      3.277420654971629e-01,      3.277420654971629e-01,
     -8.860983449974991e-01,      3.277420654971629e-01,      3.277420654971629e-01,
      8.860983449974991e-01,     -3.277420654971629e-01,      3.277420654971629e-01,
     -8.860983449974991e-01,     -3.277420654971629e-01,      3.277420654971629e-01,
      8.860983449974991e-01,      3.277420654971629e-01,     -3.277420654971629e-01,
     -8.860983449974991e-01,      3.277420654971629e-01,     -3.277420654971629e-01,
      8.860983449974991e-01,     -3.277420654971629e-01,     -3.277420654971629e-01,
     -8.860983449974991e-01,     -3.277420654971629e-01,     -3.277420654971629e-01,
      6.620338663699974e-01,      6.620338663699974e-01,      3.513151285646334e-01,
     -6.620338663699974e-01,      6.620338663699974e-01,      3.513151285646334e-01,
      6.620338663699974e-01,     -6.620338663699974e-01,      3.513151285646334e-01,
     -6.620338663699974e-01,     -6.620338663699974e-01,      3.513151285646334e-01,
      6.620338663699974e-01,      6.620338663699974e-01,     -3.513151285646334e-01,
     -6.620338663699974e-01,      6.620338663699974e-01,     -3.513151285646334e-01,
      6.620338663699974e-01,     -6.620338663699974e-01,     -3.513151285646334e-01,
     -6.620338663699974e-01,     -6.620338663699974e-01,     -3.513151285646334e-01,
      6.620338663699974e-01,      3.513151285646334e-01,      6.620338663699974e-01,
     -6.620338663699974e-01,      3.513151285646334e-01,      6.620338663699974e-01,
      6.620338663699974e-01,     -3.513151285646334e-01,      6.620338663699974e-01,
     -6.620338663699974e-01,     -3.513151285646334e-01,      6.620338663699974e-01,
      6.620338663699974e-01,      3.513151285646334e-01,     -6.620338663699974e-01,
     -6.620338663699974e-01,      3.513151285646334e-01,     -6.620338663699974e-01,
      6.620338663699974e-01,     -3.513151285646334e-01,     -6.620338663699974e-01,
     -6.620338663699974e-01,     -3.513151285646334e-01,     -6.620338663699974e-01,
      3.513151285646334e-01,      6.620338663699974e-01,      6.620338663699974e-01,
     -3.513151285646334e-01,      6.620338663699974e-01,      6.620338663699974e-01,
      3.513151285646334e-01,     -6.620338663699974e-01,      6.620338663699974e-01,
     -3.513151285646334e-01,     -6.620338663699974e-01,      6.620338663699974e-01,
      3.513151285646334e-01,      6.620338663699974e-01,     -6.620338663699974e-01,
     -3.513151285646334e-01,      6.620338663699974e-01,     -6.620338663699974e-01,
      3.513151285646334e-01,     -6.620338663699974e-01,     -6.620338663699974e-01,
     -3.513151285646334e-01,     -6.620338663699974e-01,     -6.620338663699974e-01,
      8.506508083520399e-01,      5.257311121191337e-01,      0.000000000000000e+00,
     -8.506508083520399e-01,      5.257311121191337e-01,      0.000000000000000e+00,
      8.506508083520399e-01,     -5.257311121191337e-01,      0.000000000000000e+00,
     -8.506508083520399e-01,     -5.257311121191337e-01,      0.000000000000000e+00,
      5.257311121191337e-01,      8.506508083520399e-01,      0.000000000000000e+00,
     -5.257311121191337e-01,      8.506508083520399e-01,      0.000000000000000e+00,
      5.257311121191337e-01,     -8.506508083520399e-01,      0.000000000000000e+00,
     -5.257311121191337e-01,     -8.506508083520399e-01,      0.000000000000000e+00,
      8.506508083520399e-01,      0.000000000000000e+00,      5.257311121191337e-01,
     -8.506508083520399e-01,      0.000000000000000e+00,      5.257311121191337e-01,
      8.506508083520399e-01,      0.000000000000000e+00,     -5.257311121191337e-01,
     -8.506508083520399e-01,      0.000000000000000e+00,     -5.257311121191337e-01,
      5.257311121191337e-01,      0.000000000000000e+00,      8.506508083520399e-01,
     -5.257311121191337e-01,      0.000000000000000e+00,      8.506508083520399e-01,
      5.257311121191337e-01,      0.000000000000000e+00,     -8.506508083520399e-01,
     -5.257311121191337e-01,      0.000000000000000e+00,     -8.506508083520399e-01,
      0.000000000000000e+00,      8.506508083520399e-01,      5.257311121191337e-01,
      0.000000000000000e+00,     -8.506508083520399e-01,      5.257311121191337e-01,
      0.000000000000000e+00,      8.506508083520399e-01,     -5.257311121191337e-01,
      0.000000000000000e+00,     -8.506508083520399e-01,     -5.257311121191337e-01,
      0.000000000000000e+00,      5.257311121191337e-01,      8.506508083520399e-01,
      0.000000000000000e+00,     -5.257311121191337e-01,      8.506508083520399e-01,
      0.000000000000000e+00,      5.257311121191337e-01,     -8.506508083520399e-01,
      0.000000000000000e+00,     -5.257311121191337e-01,     -8.506508083520399e-01,
      3.233484542692899e-01,      1.153112011009701e-01,      9.392279297499158e-01,
     -3.233484542692899e-01,      1.153112011009701e-01,      9.392279297499158e-01,
      3.233484542692899e-01,     -1.153112011009701e-01,      9.392279297499158e-01,
     -3.233484542692899e-01,     -1.153112011009701e-01,      9.392279297499158e-01,
      3.233484542692899e-01,      1.153112011009701e-01,     -9.392279297499158e-01,
     -3.233484542692899e-01,      1.153112011009701e-01,     -9.392279297499158e-01,
      3.233484542692899e-01,     -1.153112011009701e-01,     -9.392279297499158e-01,
     -3.233484542692899e-01,     -1.153112011009701e-01,     -9.392279297499158e-01,
      3.233484542692899e-01,      9.392279297499158e-01,      1.153112011009701e-01,
     -3.233484542692899e-01,      9.392279297499158e-01,      1.153112011009701e-01,
      3.233484542692899e-01,     -9.392279297499158e-01,      1.153112011009701e-01,
     -3.233484542692899e-01,     -9.392279297499158e-01,      1.153112011009701e-01,
      3.233484542692899e-01,      9.392279297499158e-01,     -1.153112011009701e-01,
     -3.233484542692899e-01,      9.392279297499158e-01,     -1.153112011009701e-01,
      3.233484542692899e-01,     -9.392279297499158e-01,     -1.153112011009701e-01,
     -3.233484542692899e-01,     -9.392279297499158e-01,     -1.153112011009701e-01,
      1.153112011009701e-01,      3.233484542692899e-01,      9.392279297499158e-01,
     -1.153112011009701e-01,      3.233484542692899e-01,      9.392279297499158e-01,
      1.153112011009701e-01,     -3.233484542692899e-01,      9.392279297499158e-01,
     -1.153112011009701e-01,     -3.233484542692899e-01,      9.392279297499158e-01,
      1.153112011009701e-01,      3.233484542692899e-01,     -9.392279297499158e-01,
     -1.153112011009701e-01,      3.233484542692899e-01,     -9.392279297499158e-01,
      1.153112011009701e-01,     -3.233484542692899e-01,     -9.392279297499158e-01,
     -1.153112011009701e-01,     -3.233484542692899e-01,     -9.392279297499158e-01,
      1.153112011009701e-01,      9.392279297499158e-01,      3.233484542692899e-01,
     -1.153112011009701e-01,      9.392279297499158e-01,      3.233484542692899e-01,
      1.153112011009701e-01,     -9.392279297499158e-01,      3.233484542692899e-01,
     -1.153112011009701e-01,     -9.392279297499158e-01,      3.233484542692899e-01,
      1.153112011009701e-01,      9.392279297499158e-01,     -3.233484542692899e-01,
     -1.153112011009701e-01,      9.392279297499158e-01,     -3.233484542692899e-01,
      1.153112011009701e-01,     -9.392279297499158e-01,     -3.233484542692899e-01,
     -1.153112011009701e-01,     -9.392279297499158e-01,     -3.233484542692899e-01,
      9.392279297499158e-01,      3.233484542692899e-01,      1.153112011009701e-01,
     -9.392279297499158e-01,      3.233484542692899e-01,      1.153112011009701e-01,
      9.392279297499158e-01,     -3.233484542692899e-01,      1.153112011009701e-01,
     -9.392279297499158e-01,     -3.233484542692899e-01,      1.153112011009701e-01,
      9.392279297499158e-01,      3.233484542692899e-01,     -1.153112011009701e-01,
     -9.392279297499158e-01,      3.233484542692899e-01,     -1.153112011009701e-01,
      9.392279297499158e-01,     -3.233484542692899e-01,     -1.153112011009701e-01,
     -9.392279297499158e-01,     -3.233484542692899e-01,     -1.153112011009701e-01,
      9.392279297499158e-01,      1.153112011009701e-01,      3.233484542692899e-01,
     -9.392279297499158e-01,      1.153112011009701e-01,      3.233484542692899e-01,
      9.392279297499158e-01,     -1.153112011009701e-01,      3.233484542692899e-01,
     -9.392279297499158e-01,     -1.153112011009701e-01,      3.233484542692899e-01,
      9.392279297499158e-01,      1.153112011009701e-01,     -3.233484542692899e-01,
     -9.392279297499158e-01,      1.153112011009701e-01,     -3.233484542692899e-01,
      9.392279297499158e-01,     -1.153112011009701e-01,     -3.233484542692899e-01,
     -9.392279297499158e-01,     -1.153112011009701e-01,     -3.233484542692899e-01,
      2.314790158712601e-01,      5.244939240922365e-01,      8.193433888191203e-01,
     -2.314790158712601e-01,      5.244939240922365e-01,      8.193433888191203e-01,
      2.314790158712601e-01,     -5.244939240922365e-01,      8.193433888191203e-01,
     -2.314790158712601e-01,     -5.244939240922365e-01,      8.193433888191203e-01,
      2.314790158712601e-01,      5.244939240922365e-01,     -8.193433888191203e-01,
     -2.314790158712601e-01,      5.244939240922365e-01,     -8.193433888191203e-01,
      2.314790158712601e-01,     -5.244939240922365e-01,     -8.193433888191203e-01,
     -2.314790158712601e-01,     -5.244939240922365e-01,     -8.193433888191203e-01,
      2.314790158712601e-01,      8.193433888191203e-01,      5.244939240922365e-01,
     -2.314790158712601e-01,      8.193433888191203e-01,      5.244939240922365e-01,
      2.314790158712601e-01,     -8.193433888191203e-01,      5.244939240922365e-01,
     -2.314790158712601e-01,     -8.193433888191203e-01,      5.244939240922365e-01,
      2.314790158712601e-01,      8.193433888191203e-01,     -5.244939240922365e-01,
     -2.314790158712601e-01,      8.193433888191203e-01,     -5.244939240922365e-01,
      2.314790158712601e-01,     -8.193433888191203e-01,     -5.244939240922365e-01,
     -2.314790158712601e-01,     -8.193433888191203e-01,     -5.244939240922365e-01,
      5.244939240922365e-01,      2.314790158712601e-01,      8.193433888191203e-01,
     -5.244939240922365e-01,      2.314790158712601e-01,      8.193433888191203e-01,
      5.244939240922365e-01,     -2.314790158712601e-01,      8.193433888191203e-01,
     -5.244939240922365e-01,     -2.314790158712601e-01,      8.193433888191203e-01,
      5.244939240922365e-01,      2.314790158712601e-01,     -8.193433888191203e-01,
     -5.244939240922365e-01,      2.314790158712601e-01,     -8.193433888191203e-01,
      5.244939240922365e-01,     -2.314790158712601e-01,     -8.193433888191203e-01,
     -5.244939240922365e-01,     -2.314790158712601e-01,     -8.193433888191203e-01,
      5.244939240922365e-01,      8.193433888191203e-01,      2.314790158712601e-01,
     -5.244939240922365e-01,      8.193433888191203e-01,      2.314790158712601e-01,
      5.244939240922365e-01,     -8.193433888191203e-01,      2.314790158712601e-01,
     -5.244939240922365e-01,     -8.193433888191203e-01,      2.314790158712601e-01,
      5.244939240922365e-01,      8.193433888191203e-01,     -2.314790158712601e-01,
     -5.244939240922365e-01,      8.193433888191203e-01,     -2.314790158712601e-01,
      5.244939240922365e-01,     -8.193433888191203e-01,     -2.314790158712601e-01,
     -5.244939240922365e-01,     -8.193433888191203e-01,     -2.314790158712601e-01,
      8.193433888191203e-01,      2.314790158712601e-01,      5.244939240922365e-01,
     -8.193433888191203e-01,      2.314790158712601e-01,      5.244939240922365e-01,
      8.193433888191203e-01,     -2.314790158712601e-01,      5.244939240922365e-01,
     -8.193433888191203e-01,     -2.314790158712601e-01,      5.244939240922365e-01,
      8.193433888191203e-01,      2.314790158712601e-01,     -5.244939240922365e-01,
     -8.193433888191203e-01,      2.314790158712601e-01,     -5.244939240922365e-01,
      8.193433888191203e-01,     -2.314790158712601e-01,     -5.244939240922365e-01,
     -8.193433888191203e-01,     -2.314790158712601e-01,     -5.244939240922365e-01,
      8.193433888191203e-01,      5.244939240922365e-01,      2.314790158712601e-01,
     -8.193433888191203e-01,      5.244939240922365e-01,      2.314790158712601e-01,
      8.193433888191203e-01,     -5.244939240922365e-01,      2.314790158712601e-01,
     -8.193433888191203e-01,     -5.244939240922365e-01,      2.314790158712601e-01,
      8.193433888191203e-01,      5.244939240922365e-01,     -2.314790158712601e-01,
     -8.193433888191203e-01,      5.244939240922365e-01,     -2.314790158712601e-01,
      8.193433888191203e-01,     -5.244939240922365e-01,     -2.314790158712601e-01,
     -8.193433888191203e-01,     -5.244939240922365e-01,     -2.314790158712601e-01
  };


  static constexpr std::array<T,266> weights = {
       -1.313769127326952e-03,
       -1.313769127326952e-03,
       -1.313769127326952e-03,
       -1.313769127326952e-03,
       -1.313769127326952e-03,
       -1.313769127326952e-03,
       -2.522728704859336e-03,
       -2.522728704859336e-03,
       -2.522728704859336e-03,
       -2.522728704859336e-03,
       -2.522728704859336e-03,
       -2.522728704859336e-03,
       -2.522728704859336e-03,
       -2.522728704859336e-03,
       -2.522728704859336e-03,
       -2.522728704859336e-03,
       -2.522728704859336e-03,
       -2.522728704859336e-03,
        4.186853881700583e-03,
        4.186853881700583e-03,
        4.186853881700583e-03,
        4.186853881700583e-03,
        4.186853881700583e-03,
        4.186853881700583e-03,
        4.186853881700583e-03,
        4.186853881700583e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        5.315167977810885e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.047142377086219e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        4.112482394406990e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        3.595584899758782e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.256131351428158e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.229582700647240e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.080914225780505e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03,
        4.071467593830964e-03
  };
};
};
}