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

#ifndef QTAWS_ENABLEAVAILABILITYZONESFORLOADBALANCERRESPONSE_H
#define QTAWS_ENABLEAVAILABILITYZONESFORLOADBALANCERRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "enableavailabilityzonesforloadbalancerrequest.h"

namespace AWS {

namespace elasticloadbalancing {

class EnableAvailabilityZonesForLoadBalancerResponsePrivate;

class QTAWS_EXPORT EnableAvailabilityZonesForLoadBalancerResponse : public EnableAvailabilityZonesForLoadBalancerResponse {
    Q_OBJECT

public:
    EnableAvailabilityZonesForLoadBalancerResponse(const EnableAvailabilityZonesForLoadBalancerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableAvailabilityZonesForLoadBalancerRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(EnableAvailabilityZonesForLoadBalancerResponse)
    Q_DISABLE_COPY(EnableAvailabilityZonesForLoadBalancerResponse)

};

} // namespace elasticloadbalancing
} // namespace AWS

#endif
