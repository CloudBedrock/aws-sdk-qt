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

#ifndef QTAWS_GETMODELREQUEST_P_H
#define QTAWS_GETMODELREQUEST_P_H

#include "apigateway_p.h"
#include "getmodelrequest.h"

namespace AWS {

namespace APIGateway {

class GetModelRequest;

class QTAWS_EXPORT GetModelRequestPrivate : public APIGatewayPrivate {

public:
    GetModelRequestPrivate(const APIGateway::Action action,
                                   GetModelRequest * const q);
    GetModelRequestPrivate(const GetModelRequestPrivate &other,
                                   GetModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetModelRequest)

};

} // namespace APIGateway
} // namespace AWS

#endif
