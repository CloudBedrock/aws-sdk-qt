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

#include "getfolderresponse.h"
#include "getfolderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  GetFolderResponse
 *
 * @brief  Handles WorkDocs GetFolder responses.
 *
 * @see    WorkDocsClient::getFolder
 */

/**
 * @brief  Constructs a new GetFolderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFolderResponse::GetFolderResponse(
        const GetFolderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetFolderResponse(new GetFolderResponsePrivate(this), parent)
{
    setRequest(new GetFolderRequest(request));
    setReply(reply);
}

const GetFolderRequest * GetFolderResponse::request() const
{
    Q_D(const GetFolderResponse);
    return static_cast<const GetFolderRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs GetFolder response.
 *
 * @param  response  Response to parse.
 */
void GetFolderResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetFolderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetFolderResponsePrivate
 *
 * @brief  Private implementation for GetFolderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFolderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetFolderResponse instance.
 */
GetFolderResponsePrivate::GetFolderResponsePrivate(
    GetFolderResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs GetFolderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetFolderResponsePrivate::parseGetFolderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFolderResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
