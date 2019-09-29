//
// Created by lica-pc on 9/28/19.
//

#ifndef SORTMETHODS_COUNTRYTRADE_H
#define SORTMETHODS_COUNTRYTRADE_H

#include <iostream>
#include <string>


class CountryTrade {
public:
    std::string Country_Area;
    double Year;
    std::string Commodity;
    std::string Flow;
    double Trade_usd;


    CountryTrade()= default;
    CountryTrade(const std::string &countryArea, double year, const std::string &commodity, const std::string &flow, double tradeUsd);
};


#endif //SORTMETHODS_COUNTRYTRADE_H
