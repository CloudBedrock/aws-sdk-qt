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

#include "registerdomainresponse.h"
#include "registerdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SWF {

/**
 * @class  RegisterDomainResponse
 *
 * @brief  Handles SWF RegisterDomain responses.
 *
 * @see    SWFClient::registerDomain
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterDomainResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new RegisterDomainResponsePrivate(this), parent)
{
    setRequest(new RegisterDomainRequest(request));
    setReply(reply);
}

const RegisterDomainRequest * RegisterDomainResponse::request() const
{
    Q_D(const RegisterDomainResponse);
    return static_cast<const RegisterDomainRequest *>(d->request);
}

/**
 * @brief  Parse a SWF RegisterDomain response.
 *
 * @param  response  Response to parse.
 */
void RegisterDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterDomainResponsePrivate
 *
 * @brief  Private implementation for RegisterDomainResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterDomainResponse instance.
 */
RegisterDomainResponsePrivate::RegisterDomainResponsePrivate(
    RegisterDomainQueueResponse * const q) : RegisterDomainPrivate(q)
{

}

/**
 * @brief  Parse an SWF RegisterDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterDomainResponsePrivate::RegisterDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterDomainResponse"));
    /// @todo
}
