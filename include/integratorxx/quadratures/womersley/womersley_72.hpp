#pragma once

namespace IntegratorXX {
namespace WomersleyGrids {

/**
 *  \brief Womersley Quadrature specification for index 11 grid with 72 points
 * 
 */
template <typename T>
struct womersley_72 {

  static constexpr std::array<cartesian_pt_t<T>,72> points = {
     0.0000000000000000e+00,      0.0000000000000000e+00,      1.0000000000000000e+00,
     3.7828701656133973e-01,      0.0000000000000000e+00,      9.2568835636034696e-01,
     2.8407948390965260e-01,      4.1954731923528976e-01,      8.6213623850532306e-01,
    -9.9456444680869907e-02,      4.6644729573257138e-01,      8.7893989323230293e-01,
    -3.7739769508048021e-01,      1.4085306515946358e-01,      9.1527667608386309e-01,
    -2.7377335517052159e-01,     -3.4143885048131084e-01,      8.9914829776888106e-01,
     1.3382797764128113e-01,     -4.3447190634227700e-01,      8.9068750692919929e-01,
     4.9969539963048903e-01,     -4.2943464867491393e-01,      7.5225686444563533e-01,
     7.3148703771509893e-01,     -1.0910076122419068e-01,      6.7307038083330606e-01,
     6.5685637086153004e-01,      3.0697324644650237e-01,      6.8869959635875722e-01,
     3.8972605990838827e-01,      7.2172443641716533e-01,      5.7203796736458701e-01,
     1.8273797033287277e-02,      8.1276113642009040e-01,      5.8231040130424372e-01,
    -3.9676043721584819e-01,      6.2806325995176060e-01,      6.6941593718633285e-01,
    -6.7687619865529525e-01,      2.2687104249747059e-01,      7.0026290903493393e-01,
    -6.2077531104041916e-01,     -2.4152805976568939e-01,      7.4585669504838015e-01,
    -3.9820109940526194e-01,     -6.6419942863342729e-01,      6.3267290398393816e-01,
    -3.6408755972461623e-03,     -7.5268838946534733e-01,      6.5836686762696917e-01,
     3.5901425030124240e-01,     -7.8840395090910542e-01,      4.9952775525645210e-01,
     7.0916202546265705e-01,     -5.8484041426642397e-01,      3.9376504603936002e-01,
     9.1587828026616191e-01,     -2.6002345018780276e-01,      3.0586726057087077e-01,
     9.2471224043005573e-01,      1.6301913478916788e-01,      3.4399423554969311e-01,
     7.3344981650025953e-01,      5.6876854728914106e-01,      3.7222802996326831e-01,
     4.4310401400657895e-01,      8.8235764608692591e-01,      1.5844184157979510e-01,
     5.5285932806425651e-02,      9.8096065119331710e-01,      1.8617106768804489e-01,
    -3.5139595450258504e-01,      8.7882471670066031e-01,      3.2278166068601433e-01,
    -7.1403431809566598e-01,      5.5927465678500998e-01,      4.2114944005621874e-01,
    -9.1000883804967059e-01,      1.0025071840398664e-01,      4.0228560517494638e-01,
    -8.3436056025113936e-01,     -3.1822795446955476e-01,      4.5008157537442894e-01,
    -6.4652020472282501e-01,     -6.8549598361065800e-01,      3.3482365707759215e-01,
    -2.2740561800860026e-01,     -9.2994548263629084e-01,      2.8894304667612758e-01,
     1.4056184525538468e-01,     -9.7246438339865116e-01,      1.8589080310623876e-01,
     5.5365328394276081e-01,     -8.3054270912354711e-01,      6.0554516768905754e-02,
     8.3484086817343062e-01,     -5.4574295301941234e-01,     -7.2148139664748465e-02,
     9.8534483835342102e-01,     -1.4055976301837314e-01,     -9.6635927845130989e-02,
     9.5716957003714553e-01,      2.8832752835516123e-01,     -2.6337247151318282e-02,
     7.5213127749661379e-01,      6.5803129607456878e-01,     -3.5963242313992151e-02,
     3.6349019432312146e-01,      8.9536391255521464e-01,     -2.5729038599364185e-01,
    -4.9181686978331821e-02,      9.7595795078392211e-01,     -2.1233756136777329e-01,
    -4.4341507994578794e-01,      8.9514463915128994e-01,     -4.5816393085635190e-02,
    -7.7239733487966478e-01,      6.3268954546015388e-01,      5.5734155920896589e-02,
    -9.6504867977842612e-01,      2.5771433239726788e-01,      4.7585381525708494e-02,
    -9.7993241469125447e-01,     -1.9627811014599156e-01,      3.4747174200001472e-02,
    -8.3527974620637446e-01,     -5.4974130607342075e-01,     -9.6042685356141199e-03,
    -4.7654149462174233e-01,     -8.7825902364270270e-01,     -3.9614281437917113e-02,
    -9.3714804003863381e-02,     -9.7402740319177539e-01,     -2.0612654691233734e-01,
     3.2742996315041978e-01,     -9.1143556539450965e-01,     -2.4914820763012779e-01,
     6.8344656135972770e-01,     -6.0186515540533581e-01,     -4.1310910480704138e-01,
     8.7497731068045137e-01,     -1.4978821950243693e-01,     -4.6041089810374247e-01,
     8.5714423023844621e-01,      2.8951027401331236e-01,     -4.2601357937239315e-01,
     6.4075024680720760e-01,      6.2680478770420567e-01,     -4.4334510184233256e-01,
     2.1576302616657622e-01,      7.5291870866103849e-01,     -6.2173928192421279e-01,
    -2.1904799433687991e-01,      8.1955021016479135e-01,     -5.2948600472140583e-01,
    -6.0109209196360103e-01,      6.9833283110571243e-01,     -3.8861234408945688e-01,
    -8.4791564629816607e-01,      3.9163939113235519e-01,     -3.5729209909574211e-01,
    -9.3753974188696154e-01,     -1.7136951090184850e-02,     -3.4745583502059973e-01,
    -8.1071642546432721e-01,     -3.8122554239749773e-01,     -4.4430390872248421e-01,
    -5.9208984102958884e-01,     -7.1468511319219574e-01,     -3.7236381286453551e-01,
    -1.4596757989339798e-01,     -8.2608740221064036e-01,     -5.4430971838553477e-01,
     3.1446046787452314e-01,     -7.3149996363917791e-01,     -6.0499786556649715e-01,
     5.9742880509514584e-01,     -3.4865192818634344e-01,     -7.2216387047160646e-01,
     6.4458326825651935e-01,      1.1020334143998840e-01,     -7.5654982243022528e-01,
     4.3762718667799860e-01,      4.3028509509108842e-01,     -7.8951705644827785e-01,
    -5.6264905418883682e-02,      5.2929239412132467e-01,     -8.4657180554488143e-01,
    -4.6375681450938888e-01,      4.8188925305445701e-01,     -7.4344627565596277e-01,
    -6.9650492530483343e-01,      1.5539638218606988e-01,     -7.0052327115491986e-01,
    -6.0276863645839662e-01,     -2.1848269424460237e-01,     -7.6742119023239441e-01,
    -3.8153476217613452e-01,     -5.7101444606745499e-01,     -7.2689320235745636e-01,
     9.6892046971754950e-02,     -5.3143010295612381e-01,     -8.4154261740310388e-01,
     3.1155719641872742e-01,     -1.7111747301149344e-01,     -9.3469295695959076e-01,
     1.4255701927056227e-01,      1.7450282824502747e-01,     -9.7428243296858175e-01,
    -2.8854986931810478e-01,      1.2495031521433940e-01,     -9.4927677294050650e-01,
    -1.7478152394384533e-01,     -2.4336640044094723e-01,     -9.5405671425984084e-01
};


static constexpr auto weights = detail::create_array<72, T>(4.0 * M_PI / 72.0);
};
}  // namespace WomersleyGrids
}  // namespace IntegratorXX
