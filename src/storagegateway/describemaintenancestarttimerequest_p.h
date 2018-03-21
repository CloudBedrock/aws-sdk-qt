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

#ifndef QTAWS_DESCRIBEMAINTENANCESTARTTIMEREQUEST_P_H
#define QTAWS_DESCRIBEMAINTENANCESTARTTIMEREQUEST_P_H

#include "storagegateway_p.h"
#include "describemaintenancestarttimerequest.h"

namespace AWS {

namespace StorageGateway {

class DescribeMaintenanceStartTimeRequest;

class QTAWS_EXPORT DescribeMaintenanceStartTimeRequestPrivate : public StorageGatewayPrivate {

public:
    DescribeMaintenanceStartTimeRequestPrivate(const StorageGateway::Action action,
                                   DescribeMaintenanceStartTimeRequest * const q);
    DescribeMaintenanceStartTimeRequestPrivate(const DescribeMaintenanceStartTimeRequestPrivate &other,
                                   DescribeMaintenanceStartTimeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMaintenanceStartTimeRequest)

};

} // namespace StorageGateway
} // namespace AWS

#endif
