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

#ifndef QTAWS_DELETEVPCENDPOINTSRESPONSE_H
#define QTAWS_DELETEVPCENDPOINTSRESPONSE_H

#include "ec2response.h"
#include "deletevpcendpointsrequest.h"

namespace AWS {

namespace ec2 {

class DeleteVpcEndpointsResponsePrivate;

class QTAWS_EXPORT DeleteVpcEndpointsResponse : public DeleteVpcEndpointsResponse {
    Q_OBJECT

public:
    DeleteVpcEndpointsResponse(const DeleteVpcEndpointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVpcEndpointsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteVpcEndpointsResponse)
    Q_DISABLE_COPY(DeleteVpcEndpointsResponse)

};

} // namespace ec2
} // namespace AWS

#endif
