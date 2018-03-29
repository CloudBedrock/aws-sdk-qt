/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_IMPORTAPIKEYSRESPONSE_H
#define QTAWS_IMPORTAPIKEYSRESPONSE_H

#include "apigatewayresponse.h"
#include "importapikeysrequest.h"

namespace AWS {

namespace APIGateway {

class ImportApiKeysResponsePrivate;

class QTAWS_EXPORT ImportApiKeysResponse : public APIGatewayResponse {
    Q_OBJECT

public:
    ImportApiKeysResponse(const ImportApiKeysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportApiKeysRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ImportApiKeysResponse)
    Q_DISABLE_COPY(ImportApiKeysResponse)

};

} // namespace APIGateway
} // namespace AWS

#endif
