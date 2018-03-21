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

#ifndef QTAWS_DESCRIBESPOTINSTANCEREQUESTSRESPONSE_H
#define QTAWS_DESCRIBESPOTINSTANCEREQUESTSRESPONSE_H

#include "ec2response.h"
#include "describespotinstancerequestsrequest.h"

namespace AWS {

namespace ec2 {

class DescribeSpotInstanceRequestsResponsePrivate;

class QTAWS_EXPORT DescribeSpotInstanceRequestsResponse : public DescribeSpotInstanceRequestsResponse {
    Q_OBJECT

public:
    DescribeSpotInstanceRequestsResponse(const DescribeSpotInstanceRequestsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSpotInstanceRequestsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeSpotInstanceRequestsResponse)
    Q_DISABLE_COPY(DescribeSpotInstanceRequestsResponse)

};

} // namespace ec2
} // namespace AWS

#endif
