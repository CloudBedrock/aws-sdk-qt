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

#ifndef QTAWS_CREATEQUEUERESPONSE_H
#define QTAWS_CREATEQUEUERESPONSE_H

#include "mediaconvertresponse.h"
#include "createqueuerequest.h"

namespace QtAws {
namespace MediaConvert {

class CreateQueueResponsePrivate;

class QTAWS_EXPORT CreateQueueResponse : public MediaConvertResponse {
    Q_OBJECT

public:
    CreateQueueResponse(const CreateQueueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateQueueRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(CreateQueueResponse)
    Q_DISABLE_COPY(CreateQueueResponse)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
