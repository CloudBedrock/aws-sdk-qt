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

#ifndef QTAWS_DELETENATGATEWAYRESPONSE_P_H
#define QTAWS_DELETENATGATEWAYRESPONSE_P_H

#include "ec2response.h"
#include "deletenatgatewayrequest.h"

namespace AWS {

namespace EC2 {

class DeleteNatGatewayResponse;

class QTAWS_EXPORT DeleteNatGatewayResponsePrivate : public EC2ResponsePrivate {
    Q_OBJECT

public:

    DeleteNatGatewayResponsePrivate(DeleteNatGatewayResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNatGatewayResponse)
    Q_DISABLE_COPY(DeleteNatGatewayResponsePrivate)

};

} // namespace EC2
} // namespace AWS

#endif
