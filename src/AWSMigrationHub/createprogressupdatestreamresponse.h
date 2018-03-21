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

#ifndef QTAWS_CREATEPROGRESSUPDATESTREAMRESPONSE_H
#define QTAWS_CREATEPROGRESSUPDATESTREAMRESPONSE_H

#include "awsmigrationhubresponse.h"
#include "createprogressupdatestreamrequest.h"

namespace AWS {

namespace AWSMigrationHub {

class CreateProgressUpdateStreamResponsePrivate;

class QTAWS_EXPORT CreateProgressUpdateStreamResponse : public CreateProgressUpdateStreamResponse {
    Q_OBJECT

public:
    CreateProgressUpdateStreamResponse(const CreateProgressUpdateStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProgressUpdateStreamRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(CreateProgressUpdateStreamResponse)
    Q_DISABLE_COPY(CreateProgressUpdateStreamResponse)

};

} // namespace AWSMigrationHub
} // namespace AWS

#endif
