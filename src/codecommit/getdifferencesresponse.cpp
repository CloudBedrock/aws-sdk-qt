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

#include "getdifferencesresponse.h"
#include "getdifferencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  GetDifferencesResponse
 *
 * @brief  Handles CodeCommit GetDifferences responses.
 *
 * @see    CodeCommitClient::getDifferences
 */

/**
 * @brief  Constructs a new GetDifferencesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDifferencesResponse::GetDifferencesResponse(
        const GetDifferencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new GetDifferencesResponsePrivate(this), parent)
{
    setRequest(new GetDifferencesRequest(request));
    setReply(reply);
}

const GetDifferencesRequest * GetDifferencesResponse::request() const
{
    Q_D(const GetDifferencesResponse);
    return static_cast<const GetDifferencesRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit GetDifferences response.
 *
 * @param  response  Response to parse.
 */
void GetDifferencesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDifferencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDifferencesResponsePrivate
 *
 * @brief  Private implementation for GetDifferencesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDifferencesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDifferencesResponse instance.
 */
GetDifferencesResponsePrivate::GetDifferencesResponsePrivate(
    GetDifferencesResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit GetDifferencesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDifferencesResponsePrivate::GetDifferencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDifferencesResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
