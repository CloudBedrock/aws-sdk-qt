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

#ifndef QTAWS_CREATECLUSTERSUBNETGROUPRESPONSE_H
#define QTAWS_CREATECLUSTERSUBNETGROUPRESPONSE_H

#include "redshiftresponse.h"
#include "createclustersubnetgrouprequest.h"

namespace AWS {

namespace redshift {

class CreateClusterSubnetGroupResponsePrivate;

class QTAWS_EXPORT CreateClusterSubnetGroupResponse : public CreateClusterSubnetGroupResponse {
    Q_OBJECT

public:
    CreateClusterSubnetGroupResponse(const CreateClusterSubnetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateClusterSubnetGroupRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(CreateClusterSubnetGroupResponse)
    Q_DISABLE_COPY(CreateClusterSubnetGroupResponse)

};

} // namespace redshift
} // namespace AWS

#endif
