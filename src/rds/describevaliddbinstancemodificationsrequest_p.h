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

#ifndef QTAWS_DESCRIBEVALIDDBINSTANCEMODIFICATIONSREQUEST_P_H
#define QTAWS_DESCRIBEVALIDDBINSTANCEMODIFICATIONSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describevaliddbinstancemodificationsrequest.h"

namespace QtAws {
namespace RDS {

class DescribeValidDBInstanceModificationsRequest;

class QTAWS_EXPORT DescribeValidDBInstanceModificationsRequestPrivate : public RDSRequestPrivate {

public:
    DescribeValidDBInstanceModificationsRequestPrivate(const RDSRequest::Action action,
                                   DescribeValidDBInstanceModificationsRequest * const q);
    DescribeValidDBInstanceModificationsRequestPrivate(const DescribeValidDBInstanceModificationsRequestPrivate &other,
                                   DescribeValidDBInstanceModificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeValidDBInstanceModificationsRequest)

};

} // namespace RDS
} // namespace QtAws

#endif
