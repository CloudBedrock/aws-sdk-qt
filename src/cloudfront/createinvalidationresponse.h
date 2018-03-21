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

#ifndef QTAWS_CREATEINVALIDATIONRESPONSE_H
#define QTAWS_CREATEINVALIDATIONRESPONSE_H

#include "cloudfrontresponse.h"
#include "createinvalidationrequest.h"

namespace AWS {

namespace cloudfront {

class CreateInvalidationResponsePrivate;

class QTAWS_EXPORT CreateInvalidationResponse : public CreateInvalidationResponse {
    Q_OBJECT

public:
    CreateInvalidationResponse(const CreateInvalidationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateInvalidationRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(CreateInvalidationResponse)
    Q_DISABLE_COPY(CreateInvalidationResponse)

};

} // namespace cloudfront
} // namespace AWS

#endif
