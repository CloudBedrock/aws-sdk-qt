/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBEGAMESESSIONDETAILSRESPONSE_P_H
#define QTAWS_DESCRIBEGAMESESSIONDETAILSRESPONSE_P_H

#include "gameliftresponse.h"
#include "describegamesessiondetailsrequest.h"

namespace AWS {

namespace GameLift {

class DescribeGameSessionDetailsResponse;

class QTAWS_EXPORT DescribeGameSessionDetailsResponsePrivate : public GameLiftResponsePrivate {
    Q_OBJECT

public:

    DescribeGameSessionDetailsResponsePrivate(DescribeGameSessionDetailsResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGameSessionDetailsResponse)
    Q_DISABLE_COPY(DescribeGameSessionDetailsResponsePrivate)

};

} // namespace GameLift
} // namespace AWS

#endif
