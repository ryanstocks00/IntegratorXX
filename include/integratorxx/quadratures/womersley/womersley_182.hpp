#pragma once

namespace IntegratorXX {
namespace WomersleyGrids {

/**
 *  \brief Womersley Quadrature specification for index 18 grid with 182 points
 * 
 */
template <typename T>
struct womersley_182 {

  static constexpr std::array<cartesian_pt_t<T>,182> points = {
     0.0000000000000000e+00,      0.0000000000000000e+00,      1.0000000000000000e+00,
     2.2505452334312342e-01,      0.0000000000000000e+00,      9.7434617129786039e-01,
     2.2359413696695157e-01,      2.6499097814342470e-01,      9.3796878595004163e-01,
    -1.3607586934996755e-02,      3.3221150155230589e-01,      9.4310675525847487e-01,
    -1.9471012055612830e-01,      1.7598000386204096e-01,      9.6494507988472278e-01,
    -2.8667334685808743e-01,     -1.0363648092309934e-01,      9.5240635866370549e-01,
    -8.9784024378318186e-02,     -2.6230611856409708e-01,      9.6079879742341034e-01,
     1.5785768866268970e-01,     -3.0017089981047484e-01,      9.4073289569199359e-01,
     3.9169044044739776e-01,     -2.3520084749214959e-01,      8.8952749266174913e-01,
     4.8436764599034465e-01,      4.7101132961108010e-03,      8.7485187223352845e-01,
     4.7214102523856327e-01,      2.4912490473565502e-01,      8.4558833608744222e-01,
     3.0227091591037775e-01,      4.9000581284860839e-01,      8.1763475755943493e-01,
     3.2364462668285403e-02,      5.6154826883371411e-01,      8.2681079052347395e-01,
    -2.2749861769822974e-01,      5.3502635162554857e-01,      8.1362840536183922e-01,
    -3.6957800481169817e-01,      3.6181184222057083e-01,      8.5586464419811215e-01,
    -4.5418712993802057e-01,      9.2961552189387120e-02,      8.8604300167271988e-01,
    -4.9369898781012145e-01,     -2.1733176246338876e-01,      8.4203813123861482e-01,
    -3.2401428366590146e-01,     -4.1534605650846795e-01,      8.5000141018902864e-01,
    -8.4356770199885009e-02,     -5.1699551391024690e-01,      8.5182132746141281e-01,
     1.9096401973436408e-01,     -5.2894839066586008e-01,      8.2688955923925545e-01,
     4.2724554622679306e-01,     -5.0275079694803548e-01,      7.5146715124314267e-01,
     6.0099687280070224e-01,     -3.1437339884079302e-01,      7.3482795604485829e-01,
     6.9300170709043996e-01,     -8.1163063506312652e-02,      7.1635270020570618e-01,
     7.1347768520689037e-01,      1.5522986222652821e-01,      6.8326662627772961e-01,
     6.0786806790763304e-01,      4.0271116179689626e-01,      6.8433919380847630e-01,
     4.4856012502407133e-01,      6.0729299679692950e-01,      6.5573548804361204e-01,
     1.8117083509902232e-01,      7.1887711974872981e-01,      6.7111311655435046e-01,
    -1.0758854223785622e-01,      7.5061540437123997e-01,      6.5192117644676406e-01,
    -3.6666978601810779e-01,      6.9468192991196243e-01,      6.1884592935174609e-01,
    -5.3861631136367694e-01,      5.2124932688712444e-01,      6.6196042808668432e-01,
    -6.1510754082273411e-01,      2.8913781486506490e-01,      7.3351348810915817e-01,
    -6.6136105069988804e-01,      2.0476848046358898e-02,      7.4978814295187834e-01,
    -7.1377158352419390e-01,     -2.0901800534312334e-01,      6.6846211560248248e-01,
    -5.6620849785175376e-01,     -4.4965920291143380e-01,      6.9080716426330913e-01,
    -3.3863748414890066e-01,     -6.3423099040420028e-01,      6.9503647756086184e-01,
    -5.6233004343197321e-02,     -7.1462138509698492e-01,      6.9724753508679016e-01,
     1.8984648375805413e-01,     -7.3676151385768418e-01,      6.4895360720380957e-01,
     4.3086156546656801e-01,     -7.0233058871238752e-01,      5.6664808793695720e-01,
     6.4378768542782716e-01,     -5.4099492629854562e-01,      5.4116716993061609e-01,
     7.8883618788549836e-01,     -3.2943353961348698e-01,      5.1885548244188739e-01,
     8.6678510001451070e-01,     -1.0372258599284878e-01,      4.8777578409325623e-01,
     8.7887028381733612e-01,      1.3928197132107323e-01,      4.5627574632863266e-01,
     7.8879462608206730e-01,      3.8011846980160285e-01,      4.8302483039667787e-01,
     6.5159153095628031e-01,      6.0995765828803916e-01,      4.5097686402056419e-01,
     4.6617715281522737e-01,      7.7551046993789774e-01,      4.2574919049810200e-01,
     2.3554483440502036e-01,      8.4733845635111682e-01,      4.7595816136885166e-01,
    -4.7225937698502120e-02,      8.8394570170023723e-01,      4.6519856755386985e-01,
    -3.3584404371613436e-01,      8.4667301469481893e-01,      4.1273912400932156e-01,
    -5.9248274376400700e-01,      6.8697855424386456e-01,      4.2074299085175931e-01,
    -7.4193173032016102e-01,      4.6877204822862495e-01,      4.7936423974225650e-01,
    -8.0358871106134022e-01,      2.2872672090501661e-01,      5.4948091013138256e-01,
    -8.5848243328245644e-01,      7.0072338691825461e-03,      5.1279509593885086e-01,
    -8.6837434518547829e-01,     -2.3803761191705494e-01,      4.3504493093991703e-01,
    -7.3487643773760114e-01,     -4.6247779774676578e-01,      4.9605534756657449e-01,
    -5.3049348558880971e-01,     -6.7384014647562096e-01,      5.1431130528654445e-01,
    -2.6344045893737050e-01,     -8.1402395261747895e-01,      5.1765251777605037e-01,
    -2.7391311732136960e-02,     -8.8804277817751298e-01,      4.5894415800656763e-01,
     2.1005696685589717e-01,     -8.8708906995123993e-01,      4.1103412589266203e-01,
     4.5504533473142950e-01,     -8.2439121118237235e-01,      3.3661977699538437e-01,
     6.7736159173579391e-01,     -6.6114169462294925e-01,      3.2260336897225161e-01,
     8.4670119598842775e-01,     -4.5439784247352571e-01,      2.7680261101942460e-01,
     9.4342576318124383e-01,     -2.3665725915704416e-01,      2.3225238654137279e-01,
     9.7750408637253494e-01,      2.7784881704633036e-03,      2.1089817715779863e-01,
     9.3966190135263017e-01,      2.6712317512198824e-01,      2.1373048556326096e-01,
     8.3056002928824213e-01,      5.0152542756666929e-01,      2.4216168824317350e-01,
     6.7782080991300775e-01,      7.1221475909570842e-01,      1.8250777127321455e-01,
     4.8388779193039733e-01,      8.6189368964147706e-01,      1.5163071119310115e-01,
     2.6187711402314429e-01,      9.4156581279966045e-01,      2.1183530706146203e-01,
     1.9630312535051278e-02,      9.7017397580490872e-01,      2.4161354991115969e-01,
    -2.5491536505733103e-01,      9.4392073686707323e-01,      2.0983755424139203e-01,
    -5.3730363571954942e-01,      8.1754049871775625e-01,      2.0720119690502822e-01,
    -7.6007503029034984e-01,      6.1385824794684207e-01,      2.1322288750684665e-01,
    -8.8531008386905607e-01,      3.7868572626544827e-01,      2.6985769605956234e-01,
    -9.5083748615858987e-01,      1.5589551097805188e-01,      2.6759047922619661e-01,
    -9.7259192791346782e-01,     -7.2553015646977415e-02,      2.2090948752394804e-01,
    -9.1437479908939268e-01,     -3.5010431989180157e-01,      2.0333640102876782e-01,
    -7.7003390243186132e-01,     -5.7457365363900359e-01,      2.7733176098219431e-01,
    -5.7388194594966313e-01,     -7.6408205596999956e-01,      2.9468309055269248e-01,
    -3.5257064262551635e-01,     -8.9147876017180383e-01,      2.8453393843472147e-01,
    -1.3274902113217613e-01,     -9.6960766718837055e-01,      2.0552048345110285e-01,
     1.1196335489995358e-01,     -9.7977050998455706e-01,      1.6587330986071319e-01,
     3.5951876205049582e-01,     -9.2632322609129414e-01,      1.1256793743111716e-01,
     6.1292366471213944e-01,     -7.8491554168826894e-01,      9.0731326740285556e-02,
     8.0553297855471173e-01,     -5.9040033626599153e-01,      5.0438709319117057e-02,
     9.2489132845776190e-01,     -3.7845477815123607e-01,     -3.6715275269771037e-02,
     9.8728066210907295e-01,     -1.4861977763120440e-01,     -5.6471726751726625e-02,
     9.9162664521866761e-01,      1.2253250761889448e-01,     -4.0772307624126009e-02,
     9.1682844960136234e-01,      3.9854005638970014e-01,     -2.4319075937558422e-02,
     7.8016046821884089e-01,      6.2422049873438989e-01,     -4.1211803992891233e-02,
     5.8361377416129467e-01,      8.0347236416310286e-01,     -1.1758878618033064e-01,
     3.5770285158280807e-01,      9.2795623218776968e-01,     -1.0462266061138678e-01,
     1.3090462363427932e-01,      9.9011186426840903e-01,     -5.0422968438036370e-02,
    -1.0895117603001173e-01,      9.9358396749760836e-01,     -3.0340414851958829e-02,
    -3.6409303331544607e-01,      9.3051633028300407e-01,     -3.9694107469605971e-02,
    -5.8773593276434566e-01,      8.0840976131777009e-01,     -3.2251064226945417e-02,
    -7.8639235436852584e-01,      6.1722342353588899e-01,     -2.4946150592096608e-02,
    -9.2056009401091221e-01,      3.9052416811590301e-01,     -7.7451553891646303e-03,
    -9.8311995469516766e-01,      1.7825456742170773e-01,     -4.1236681164606680e-02,
    -9.9684114771171606e-01,     -6.9392575577872345e-02,     -3.8631550363116184e-02,
    -9.4152525300033085e-01,     -3.3526814458095877e-01,     -3.3548013233339759e-02,
    -7.9719785810034238e-01,     -6.0286947510073663e-01,      3.1999547371622639e-02,
    -6.1318007754436243e-01,     -7.8944719375637351e-01,      2.7987868316048662e-02,
    -4.0718037789459061e-01,     -9.1332355061348180e-01,      6.6506956328725511e-03,
    -1.8169048681389643e-01,     -9.8104099787334187e-01,     -6.7432392016053555e-02,
     7.8565608671276765e-02,     -9.9239158921037995e-01,     -9.4796512586742029e-02,
     3.6273343007786524e-01,     -9.2301805397196379e-01,     -1.2830483523918837e-01,
     6.1021544007081852e-01,     -7.7833829725633963e-01,     -1.4773832178307469e-01,
     7.8866244340962433e-01,     -5.7394913950991566e-01,     -2.2044032210779488e-01,
     8.6926794313367250e-01,     -3.6521576562455904e-01,     -3.3315264906559150e-01,
     9.4210346233944298e-01,     -1.2634923155804301e-01,     -3.1060736941148975e-01,
     9.4990479348737988e-01,      1.5925311975248765e-01,     -2.6892253003197408e-01,
     8.5978666033542650e-01,      4.3435050061385971e-01,     -2.6852661195074040e-01,
     6.8792342736841539e-01,      6.5619952193860931e-01,     -3.1010247578056022e-01,
     4.4354918929640552e-01,      8.1684590889705289e-01,     -3.6881821781556418e-01,
     1.9918050121356007e-01,      9.1517339711406553e-01,     -3.5040659404613927e-01,
    -3.7445183369243774e-02,      9.4869544882464696e-01,     -3.1396624599126172e-01,
    -2.7487515301853843e-01,      9.1272497028284938e-01,     -3.0228592239005569e-01,
    -4.9820425550546410e-01,      8.0826647184264766e-01,     -3.1384363987706454e-01,
    -6.9160939277103717e-01,      6.6523006548254071e-01,     -2.8132793641757609e-01,
    -8.4348901054402814e-01,      4.5612020420973481e-01,     -2.8369111442399148e-01,
    -9.1147797024877220e-01,      2.4360492645005122e-01,     -3.3145821691495847e-01,
    -9.5380241953797906e-01,     -4.5771889108005845e-03,     -3.0039972341061122e-01,
    -9.1985603340409106e-01,     -2.6759978363651959e-01,     -2.8680173222590505e-01,
    -8.2165999258813993e-01,     -5.2991662937844186e-01,     -2.0991241623174414e-01,
    -6.3802843309688995e-01,     -7.3314938467627699e-01,     -2.3539689528267732e-01,
    -4.2588752442108613e-01,     -8.6154228176012115e-01,     -2.7634166041703290e-01,
    -1.8722773774352014e-01,     -9.2670338741165403e-01,     -3.2583217456109126e-01,
     1.0652622635494546e-01,     -9.4024779953132243e-01,     -3.2339795697419149e-01,
     3.8605414439721286e-01,     -8.4932252073817138e-01,     -3.6001868473829846e-01,
     6.0886174690352279e-01,     -6.8516347369542530e-01,     -3.9979793330032209e-01,
     7.0756943020263141e-01,     -4.6993862023504762e-01,     -5.2773401885258753e-01,
     7.8781288708096942e-01,     -2.1689647904044140e-01,     -5.7646055574428257e-01,
     8.6102294388052070e-01,      3.0337924760155489e-02,     -5.0766041842216625e-01,
     8.1967538976714505e-01,      3.0538172803720665e-01,     -4.8463827293259487e-01,
     6.6732455473009844e-01,      5.3390429313844145e-01,     -5.1925344911961535e-01,
     4.4714906759344691e-01,      6.8855818146917336e-01,     -5.7091623035448547e-01,
     1.8284952736990295e-01,      7.8952160113885506e-01,     -5.8585125388253767e-01,
    -7.0007171811339503e-02,      8.2040714854542862e-01,     -5.6747784671345247e-01,
    -3.0383552761235844e-01,      7.7106939626036830e-01,     -5.5958552367908065e-01,
    -5.1782876692447666e-01,      6.4729720617788045e-01,     -5.5933862285719793e-01,
    -6.9331945784691551e-01,      4.8997746786165197e-01,     -5.2842237874520692e-01,
    -7.6059027320113082e-01,      2.6888579058944972e-01,     -5.9093389472166502e-01,
    -8.3962146108344138e-01,      3.3616639382689613e-02,     -5.4213072560473941e-01,
    -8.2385956767358559e-01,     -2.4922207098865279e-01,     -5.0906165843129414e-01,
    -7.3586465617795138e-01,     -5.1011689321674170e-01,     -4.4529087464600564e-01,
    -5.3548759154340075e-01,     -6.8970403547295711e-01,     -4.8740269054998658e-01,
    -2.8785549875601574e-01,     -7.8716624790087186e-01,     -5.4544340678166470e-01,
    -1.5623459272000716e-02,     -8.4359475828292430e-01,     -5.3675300774001311e-01,
     2.4309694628411185e-01,     -7.9003516286525199e-01,     -5.6280397665955995e-01,
     4.6084747222289646e-01,     -6.4484389976681122e-01,     -6.0975072962588373e-01,
     5.6149715335651351e-01,     -3.9739516590610763e-01,     -7.2580853459227734e-01,
     6.5324249904642118e-01,     -1.0648335960311246e-01,     -7.4962359325678962e-01,
     7.0358208687787827e-01,      1.5516499035531622e-01,     -6.9346670633319130e-01,
     5.9357857731138919e-01,      3.7433536292383029e-01,     -7.1241666784380575e-01,
     3.8546682284402350e-01,      5.2656613413843800e-01,     -7.5772253158068004e-01,
     1.4154946860784015e-01,      6.2350120976859902e-01,     -7.6890180735509495e-01,
    -1.2466787713851178e-01,      6.2851658961958379e-01,     -7.6774007123683763e-01,
    -3.6077985087870712e-01,      5.3277566857376235e-01,     -7.6549852134130103e-01,
    -5.3140075825215760e-01,      3.6831383731569745e-01,     -7.6286181669475228e-01,
    -6.1688337395952020e-01,      1.2004952340050630e-01,     -7.7784510981533461e-01,
    -6.9486236261125822e-01,     -1.2270315300494261e-01,     -7.0859737035141901e-01,
    -6.2692435235562571e-01,     -4.1764867307274972e-01,     -6.5767426763105974e-01,
    -4.1912419538957518e-01,     -5.7817387118074903e-01,     -7.0003563018099857e-01,
    -1.4778338468724306e-01,     -6.5970715429910276e-01,     -7.3684906309023845e-01,
     9.6680356030180811e-02,     -6.5182846322941590e-01,     -7.5217854481622604e-01,
     3.1124383922224280e-01,     -5.2841675234538665e-01,     -7.8987531192394722e-01,
     4.3252970448591527e-01,     -2.4116614496494013e-01,     -8.6876748630463618e-01,
     4.8846868996190362e-01,      6.7941983584202864e-02,     -8.6993231104123592e-01,
     3.7935313022221240e-01,      2.7260341004235789e-01,     -8.8418243786216832e-01,
     1.4313969780370089e-01,      3.9066752093804247e-01,     -9.0933487505802246e-01,
    -1.0943953185891371e-01,      4.1013889822116945e-01,     -9.0543308589449456e-01,
    -3.3168522432160974e-01,      2.5071824106170321e-01,     -9.0946427943358454e-01,
    -4.3302299538561639e-01,     -1.9701482747622487e-03,     -9.0138072088493437e-01,
    -5.0156569700004616e-01,     -2.5965471893185194e-01,     -8.2523407499283430e-01,
    -2.9337098796511907e-01,     -4.1321796046640547e-01,     -8.6208142339825078e-01,
    -5.2960579144818852e-02,     -4.3353128515675299e-01,     -8.9958090344725505e-01,
     1.7609093346004528e-01,     -3.4779315027591501e-01,     -9.2088647930910827e-01,
     2.6499547388122718e-01,     -6.4982295558335165e-02,     -9.6205753470695976e-01,
     1.2307660392102426e-01,      1.3787110355536522e-01,     -9.8277347764970391e-01,
    -1.2956223673550071e-01,      1.2927508120821374e-01,     -9.8310812232973832e-01,
    -2.3886848475529779e-01,     -1.5026322910813056e-01,     -9.5935541326908946e-01,
    -5.4755533158165164e-03,     -1.4407811925975428e-01,     -9.8955116788696562e-01
};


static constexpr auto weights = detail::create_array<182, T>(4.0 * M_PI / 182.0);
};
}  // namespace WomersleyGrids
}  // namespace IntegratorXX
