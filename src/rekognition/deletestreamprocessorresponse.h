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

#ifndef QTAWS_DELETESTREAMPROCESSORRESPONSE_H
#define QTAWS_DELETESTREAMPROCESSORRESPONSE_H

#include "rekognitionresponse.h"
#include "deletestreamprocessorrequest.h"

namespace AWS {

namespace rekognition {

class DeleteStreamProcessorResponsePrivate;

class QTAWS_EXPORT DeleteStreamProcessorResponse : public DeleteStreamProcessorResponse {
    Q_OBJECT

public:
    DeleteStreamProcessorResponse(const DeleteStreamProcessorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStreamProcessorRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteStreamProcessorResponse)
    Q_DISABLE_COPY(DeleteStreamProcessorResponse)

};

} // namespace rekognition
} // namespace AWS

#endif
