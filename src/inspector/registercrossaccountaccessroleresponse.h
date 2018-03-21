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

#ifndef QTAWS_REGISTERCROSSACCOUNTACCESSROLERESPONSE_H
#define QTAWS_REGISTERCROSSACCOUNTACCESSROLERESPONSE_H

#include "inspectorresponse.h"
#include "registercrossaccountaccessrolerequest.h"

namespace AWS {

namespace Inspector {

class RegisterCrossAccountAccessRoleResponsePrivate;

class QTAWS_EXPORT RegisterCrossAccountAccessRoleResponse : public InspectorResponse {
    Q_OBJECT

public:
    RegisterCrossAccountAccessRoleResponse(const RegisterCrossAccountAccessRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterCrossAccountAccessRoleRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(RegisterCrossAccountAccessRoleResponse)
    Q_DISABLE_COPY(RegisterCrossAccountAccessRoleResponse)

};

} // namespace Inspector
} // namespace AWS

#endif
