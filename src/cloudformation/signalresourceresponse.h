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

#ifndef QTAWS_SIGNALRESOURCERESPONSE_H
#define QTAWS_SIGNALRESOURCERESPONSE_H

#include "cloudformationresponse.h"
#include "signalresourcerequest.h"

namespace AWS {

namespace CloudFormation {

class SignalResourceResponsePrivate;

class QTAWS_EXPORT SignalResourceResponse : public SignalResourceResponse {
    Q_OBJECT

public:
    SignalResourceResponse(const SignalResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SignalResourceRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SignalResourceResponse)
    Q_DISABLE_COPY(SignalResourceResponse)

};

} // namespace CloudFormation
} // namespace AWS

#endif
