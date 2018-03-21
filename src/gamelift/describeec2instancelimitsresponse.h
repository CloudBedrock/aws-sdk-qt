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

#ifndef QTAWS_DESCRIBEEC2INSTANCELIMITSRESPONSE_H
#define QTAWS_DESCRIBEEC2INSTANCELIMITSRESPONSE_H

#include "gameliftresponse.h"
#include "describeec2instancelimitsrequest.h"

namespace AWS {

namespace GameLift {

class DescribeEC2InstanceLimitsResponsePrivate;

class QTAWS_EXPORT DescribeEC2InstanceLimitsResponse : public DescribeEC2InstanceLimitsResponse {
    Q_OBJECT

public:
    DescribeEC2InstanceLimitsResponse(const DescribeEC2InstanceLimitsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEC2InstanceLimitsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeEC2InstanceLimitsResponse)
    Q_DISABLE_COPY(DescribeEC2InstanceLimitsResponse)

};

} // namespace GameLift
} // namespace AWS

#endif
