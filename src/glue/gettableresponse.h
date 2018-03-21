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

#ifndef QTAWS_GETTABLERESPONSE_H
#define QTAWS_GETTABLERESPONSE_H

#include "glueresponse.h"
#include "gettablerequest.h"

namespace AWS {

namespace Glue {

class GetTableResponsePrivate;

class QTAWS_EXPORT GetTableResponse : public GetTableResponse {
    Q_OBJECT

public:
    GetTableResponse(const GetTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTableRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetTableResponse)
    Q_DISABLE_COPY(GetTableResponse)

};

} // namespace Glue
} // namespace AWS

#endif
