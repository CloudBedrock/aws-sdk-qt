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

#include "addtagstocertificateresponse.h"
#include "addtagstocertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ACM {

/**
 * @class  AddTagsToCertificateResponse
 *
 * @brief  Handles ACM AddTagsToCertificate responses.
 *
 * @see    ACMClient::addTagsToCertificate
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddTagsToCertificateResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMResponse(new AddTagsToCertificateResponsePrivate(this), parent)
{
    setRequest(new AddTagsToCertificateRequest(request));
    setReply(reply);
}

const AddTagsToCertificateRequest * AddTagsToCertificateResponse::request() const
{
    Q_D(const AddTagsToCertificateResponse);
    return static_cast<const AddTagsToCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a ACM AddTagsToCertificate response.
 *
 * @param  response  Response to parse.
 */
void AddTagsToCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddTagsToCertificateResponsePrivate
 *
 * @brief  Private implementation for AddTagsToCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsToCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddTagsToCertificateResponse instance.
 */
AddTagsToCertificateResponsePrivate::AddTagsToCertificateResponsePrivate(
    AddTagsToCertificateQueueResponse * const q) : AddTagsToCertificatePrivate(q)
{

}

/**
 * @brief  Parse an ACM AddTagsToCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddTagsToCertificateResponsePrivate::AddTagsToCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddTagsToCertificateResponse"));
    /// @todo
}
