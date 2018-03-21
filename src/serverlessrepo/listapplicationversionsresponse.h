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

#ifndef QTAWS_LISTAPPLICATIONVERSIONSRESPONSE_H
#define QTAWS_LISTAPPLICATIONVERSIONSRESPONSE_H

#include "serverlessapplicationrepositoryresponse.h"
#include "listapplicationversionsrequest.h"

namespace AWS {

namespace ServerlessApplicationRepository {

class ListApplicationVersionsResponsePrivate;

class QTAWS_EXPORT ListApplicationVersionsResponse : public ServerlessApplicationRepositoryResponse {
    Q_OBJECT

public:
    ListApplicationVersionsResponse(const ListApplicationVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListApplicationVersionsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ListApplicationVersionsResponse)
    Q_DISABLE_COPY(ListApplicationVersionsResponse)

};

} // namespace ServerlessApplicationRepository
} // namespace AWS

#endif
