/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_PUTKEYPOLICYRESPONSE_H
#define QTAWS_PUTKEYPOLICYRESPONSE_H

#include "kmsresponse.h"
#include "putkeypolicyrequest.h"

namespace QtAws {
namespace KMS {

class PutKeyPolicyResponsePrivate;

class QTAWS_EXPORT PutKeyPolicyResponse : public KmsResponse {
    Q_OBJECT

public:
    PutKeyPolicyResponse(const PutKeyPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutKeyPolicyRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(PutKeyPolicyResponse)
    Q_DISABLE_COPY(PutKeyPolicyResponse)

};

} // namespace KMS
} // namespace QtAws

#endif
