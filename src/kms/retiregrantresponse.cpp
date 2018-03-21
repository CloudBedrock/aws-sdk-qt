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

#include "retiregrantresponse.h"
#include "retiregrantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KMS {

/**
 * @class  RetireGrantResponse
 *
 * @brief  Handles KMS RetireGrant responses.
 *
 * @see    KMSClient::retireGrant
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RetireGrantResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new RetireGrantResponsePrivate(this), parent)
{
    setRequest(new RetireGrantRequest(request));
    setReply(reply);
}

const RetireGrantRequest * RetireGrantResponse::request() const
{
    Q_D(const RetireGrantResponse);
    return static_cast<const RetireGrantRequest *>(d->request);
}

/**
 * @brief  Parse a KMS RetireGrant response.
 *
 * @param  response  Response to parse.
 */
void RetireGrantResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RetireGrantResponsePrivate
 *
 * @brief  Private implementation for RetireGrantResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RetireGrantResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RetireGrantResponse instance.
 */
RetireGrantResponsePrivate::RetireGrantResponsePrivate(
    RetireGrantQueueResponse * const q) : RetireGrantPrivate(q)
{

}

/**
 * @brief  Parse an KMS RetireGrantResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RetireGrantResponsePrivate::RetireGrantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RetireGrantResponse"));
    /// @todo
}
