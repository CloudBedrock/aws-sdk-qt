/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBELISTENERSREQUEST_P_H
#define QTAWS_DESCRIBELISTENERSREQUEST_P_H

#include "elasticloadbalancingv2_p.h"
#include "describelistenersrequest.h"

namespace AWS {

namespace ElasticLoadBalancingv2 {

class DescribeListenersRequest;

class QTAWS_EXPORT DescribeListenersRequestPrivate : public ElasticLoadBalancingv2Private {

public:
    DescribeListenersRequestPrivate(const ElasticLoadBalancingv2::Action action,
                                   DescribeListenersRequest * const q);
    DescribeListenersRequestPrivate(const DescribeListenersRequestPrivate &other,
                                   DescribeListenersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeListenersRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace AWS

#endif
