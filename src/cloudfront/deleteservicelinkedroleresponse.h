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

#ifndef QTAWS_DELETESERVICELINKEDROLERESPONSE_H
#define QTAWS_DELETESERVICELINKEDROLERESPONSE_H

#include "cloudfrontresponse.h"
#include "deleteservicelinkedrolerequest.h"

namespace AWS {

namespace cloudfront {

class DeleteServiceLinkedRoleResponsePrivate;

class QTAWS_EXPORT DeleteServiceLinkedRoleResponse : public DeleteServiceLinkedRoleResponse {
    Q_OBJECT

public:
    DeleteServiceLinkedRoleResponse(const DeleteServiceLinkedRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteServiceLinkedRoleRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteServiceLinkedRoleResponse)
    Q_DISABLE_COPY(DeleteServiceLinkedRoleResponse)

};

} // namespace cloudfront
} // namespace AWS

#endif
