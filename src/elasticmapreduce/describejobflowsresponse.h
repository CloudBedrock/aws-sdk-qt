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

#ifndef QTAWS_DESCRIBEJOBFLOWSRESPONSE_H
#define QTAWS_DESCRIBEJOBFLOWSRESPONSE_H

#include "elasticmapreduceresponse.h"
#include "describejobflowsrequest.h"

namespace AWS {

namespace elasticmapreduce {

class DescribeJobFlowsResponsePrivate;

class QTAWS_EXPORT DescribeJobFlowsResponse : public DescribeJobFlowsResponse {
    Q_OBJECT

public:
    DescribeJobFlowsResponse(const DescribeJobFlowsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeJobFlowsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeJobFlowsResponse)
    Q_DISABLE_COPY(DescribeJobFlowsResponse)

};

} // namespace elasticmapreduce
} // namespace AWS

#endif
