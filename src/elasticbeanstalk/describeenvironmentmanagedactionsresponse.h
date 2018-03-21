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

#ifndef QTAWS_DESCRIBEENVIRONMENTMANAGEDACTIONSRESPONSE_H
#define QTAWS_DESCRIBEENVIRONMENTMANAGEDACTIONSRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "describeenvironmentmanagedactionsrequest.h"

namespace AWS {

namespace ElasticBeanstalk {

class DescribeEnvironmentManagedActionsResponsePrivate;

class QTAWS_EXPORT DescribeEnvironmentManagedActionsResponse : public DescribeEnvironmentManagedActionsResponse {
    Q_OBJECT

public:
    DescribeEnvironmentManagedActionsResponse(const DescribeEnvironmentManagedActionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEnvironmentManagedActionsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeEnvironmentManagedActionsResponse)
    Q_DISABLE_COPY(DescribeEnvironmentManagedActionsResponse)

};

} // namespace ElasticBeanstalk
} // namespace AWS

#endif
