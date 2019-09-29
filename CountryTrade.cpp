//
// Created by lica-pc on 9/28/19.
//

#include "CountryTrade.h"


CountryTrade::CountryTrade(const std::string &countryArea, double year, const std::string &commodity,
                             const std::string &flow, double tradeUsd) : Country_Area(countryArea), Year(year),
                                                                         Commodity(commodity), Flow(flow),
                                                                         Trade_usd(tradeUsd) {}
