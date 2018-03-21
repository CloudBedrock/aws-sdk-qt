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

#ifndef QTAWS_DESCRIBEDBENGINEVERSIONSRESPONSE_H
#define QTAWS_DESCRIBEDBENGINEVERSIONSRESPONSE_H

#include "rdsresponse.h"
#include "describedbengineversionsrequest.h"

namespace AWS {

namespace RDS {

class DescribeDBEngineVersionsResponsePrivate;

class QTAWS_EXPORT DescribeDBEngineVersionsResponse : public RDSResponse {
    Q_OBJECT

public:
    DescribeDBEngineVersionsResponse(const DescribeDBEngineVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBEngineVersionsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeDBEngineVersionsResponse)
    Q_DISABLE_COPY(DescribeDBEngineVersionsResponse)

};

} // namespace RDS
} // namespace AWS

#endif
