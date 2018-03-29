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

#include "putkeypolicyresponse.h"
#include "putkeypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  PutKeyPolicyResponse
 *
 * @brief  Handles KMS PutKeyPolicy responses.
 *
 * @see    KMSClient::putKeyPolicy
 */

/**
 * @brief  Constructs a new PutKeyPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutKeyPolicyResponse::PutKeyPolicyResponse(
        const PutKeyPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new PutKeyPolicyResponsePrivate(this), parent)
{
    setRequest(new PutKeyPolicyRequest(request));
    setReply(reply);
}

const PutKeyPolicyRequest * PutKeyPolicyResponse::request() const
{
    Q_D(const PutKeyPolicyResponse);
    return static_cast<const PutKeyPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a KMS PutKeyPolicy response.
 *
 * @param  response  Response to parse.
 */
void PutKeyPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutKeyPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutKeyPolicyResponsePrivate
 *
 * @brief  Private implementation for PutKeyPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutKeyPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutKeyPolicyResponse instance.
 */
PutKeyPolicyResponsePrivate::PutKeyPolicyResponsePrivate(
    PutKeyPolicyResponse * const q) : KMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an KMS PutKeyPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutKeyPolicyResponsePrivate::parsePutKeyPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutKeyPolicyResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
