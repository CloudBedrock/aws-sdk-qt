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

#ifndef QTAWS_LISTSTACKINSTANCESRESPONSE_H
#define QTAWS_LISTSTACKINSTANCESRESPONSE_H

#include "cloudformationresponse.h"
#include "liststackinstancesrequest.h"

namespace AWS {

namespace CloudFormation {

class ListStackInstancesResponsePrivate;

class QTAWS_EXPORT ListStackInstancesResponse : public ListStackInstancesResponse {
    Q_OBJECT

public:
    ListStackInstancesResponse(const ListStackInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStackInstancesRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ListStackInstancesResponse)
    Q_DISABLE_COPY(ListStackInstancesResponse)

};

} // namespace CloudFormation
} // namespace AWS

#endif
